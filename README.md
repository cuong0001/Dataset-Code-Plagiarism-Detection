# Source Code Plagiarism Detection Dataset

## 1. Project Overview
This repository contains a curated dataset for source code plagiarism detection research. The dataset includes solutions for **30 algorithmic problems** from Codeforces, covering three programming languages: **C, C++, and Python**.

The dataset is constructed using a hybrid approach:
1.  **Collection:** Crawling original "Accepted" (AC) submissions from Codeforces.
2.  **Augmentation:** Generating synthetic plagiarism cases using obfuscation techniques (lexical and structural changes).

## 2. Dataset Statistics
* **Total Files:** 300 source code files.
* **Languages:** C (GNU C11), C++ (GNU C++17), Python (PyPy 3).
* **Problems:** 10 distinct competitive programming problems (Difficulty: A level).
* **Distribution per Problem-Language Pair:**
    * 5 Original Submissions (Crawled)
    * 5 Simulated Plagiarism Submissions (Generated)

## 3. Methodology

### 3.1. Data Collection (Crawling)
We developed a stealth crawler using `undetected-chromedriver` and `selenium` to bypass bot detection on Codeforces.
* **Source:** Codeforces Contest Status API & Web Scraping.
* **Criteria:** Only submissions with verdict **"OK" (Accepted)** are selected.
* **Filtering:** To ensure diversity, we selected solutions from different users for the same problem.

### 3.2. Data Augmentation (Plagiarism Generation)
To simulate plagiarism behaviors, we implemented a **Code Obfuscation Generator** that applies 5 levels of modification to the original code. For each original file, a corresponding "cheat" file is generated:

| Cheat Type | Description | Targeted Level |
| :--- | :--- | :--- |
| **Type 1: Comment Injection** | Adds random comments and notes into the code structure. | Textual |
| **Type 2: Variable Renaming** | Identifies common variables (e.g., `cnt`, `ans`, `i`) and replaces them with random identifiers, preserving logic. | Lexical |
| **Type 3: Reformatting** | Changes indentation, adds random whitespaces and newlines to alter visual structure. | Visual |
| **Type 4: Header/Define Injection** | Injects useless macros (`#define`), imports, or global constants. | Structural |
| **Type 5: Combo Master** | A combination of all above techniques (Renaming + Comment + Format + Header). | All Levels |

## 4. Directory Structure
The dataset is organized hierarchically:

```text
dataset/
├── 1A/                     # Problem ID
│   ├── 1A-C/               # Language
│   │   ├── 360446.c        # Original File
│   │   ├── 360446_cheat_comment.c
│   │   ├── 360446_cheat_rename.c
│   │   └── ...
│   ├── 1A-C++/
│   └── 1A-Python/
├── 4A/
└── ...
```

## 5. Metadata
A detailed `dataset_metadata.csv` file is provided for ground-truth verification. It contains the following columns:

* **file_path**: Relative path to the source file (e.g., `dataset/1A/1A-C/360446.c`).
* **file_name**: The name of the file.
* **problem**: The Codeforces problem ID (e.g., `1A`, `4A`).
* **language**: Programming language used (C, C++, or Python).
* **is_plagiarism**: Binary label indicating if the file is plagiarized (`1` for Cheat, `0` for Original).
* **cheat_type**: The specific obfuscation technique used (e.g., `rename`, `format`, `comment`, `header`, `combo`, or `none`).
* **original_source**: The filename of the original submission from which the cheat was generated (used for pair-wise comparison).

## 6. How to Reproduce
To replicate the dataset generation process, follow these steps:

1.  **Install Dependencies:**
    Ensure you have Python installed, then run:
    ```bash
    pip install -r requirements.txt
    ```

2.  **Crawl Original Data:**
    This script uses `undetected-chromedriver` to fetch AC solutions from Codeforces.
    ```bash
    python scripts/data_crawl.py
    ```

3.  **Generate Plagiarism:**
    Run the obfuscation engine to create synthetic plagiarism cases (5 variants per original file).
    ```bash
    python scripts/plagiarism_code_gen.py
    ```

4.  **Create Metadata:**
    Generate the CSV file mapping all files to their labels and sources.
    ```bash
    python scripts/create_metadata.py
    ```