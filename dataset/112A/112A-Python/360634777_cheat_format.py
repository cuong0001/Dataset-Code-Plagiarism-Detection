# CHEAT: Reformat
str1 = input()
str2 = input()
def solution(str1: str, str2: str) -> int:

    if str1.lower() < str2.lower():
        return -1
    elif str1.lower() > str2.lower():

        return 1
    else:
        return 0
ans = solution(str1, str2)
print(ans)
