// CHEAT: Reformat
#include <iostream>
   using namespace std;

 int main()
{

  string userInput;

   cin >> userInput;

  userInput[0] = toupper(userInput[0]);
   cout << userInput << "\n";
 return 0;
}