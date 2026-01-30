// CHEAT: Reformat
  #include <iostream>

using namespace std;

   int main()
{
  string firstInput, secondInput;
   cin >> firstInput >> secondInput;

for (int i = 0; i < firstInput.length(); i++)
 {
  char firstWord = tolower(firstInput[i]);

   char secondWord = tolower(secondInput[i]);
if (firstWord < secondWord)
{
   cout << -1 << "\n";

 return 0;

}
 else if (firstWord > secondWord)

 {
   cout << 1 << "\n";

   return 0;
   }
   }

 cout << 0 << "\n";
   return 0;
   }