#include <iostream>
#include <string>
using namespace std;

class CountAlphabets
{
public:    // Access specifier         
   string inputStringForCount;
   string alphabetToSearch;
   int count = 0;
   CountAlphabets(string inputString, string inputString2)
   { // Constructor with parameters
       inputStringForCount = inputString;
       alphabetToSearch = inputString2;
   }

   void  Countit() // function count
   {  
     for (int i = 0; i < inputStringForCount.length(); i++) 
     {
         if (inputStringForCount[i] == alphabetToSearch[0])
         {
             count++;
         }
     }

     cout << "You have: " << count << " '" << alphabetToSearch << "' alphabet in the string \n";
   }
};

int main()
{
    CountAlphabets myObj("Und die Ruhe, mit der Kossakosvky hier vorgeht, provoziert all die Gedanken, die einem in gewöhnlichen Dokumentationen ein Off-Text einflüstern würde","o");  // Create an object of MyClass
    myObj.Countit();
    return 0;
}

