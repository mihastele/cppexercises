#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


// Function to reverse a string
string reverseUntil1(string str)
{
    string bat;
   for (int i=str.length()-2; i>=0; i--)
      bat += str[i];
    return bat;
}


int main() {
    
    /*
     * 
     * C++ has a lot of keywords (around 90), c has 32, python 33, java around 50
     * Identifiers are created by program, keywords are reserved. Programs also have operators, punctuations, ...
     * 
     * #include is a preprocessor. Preprocessor is a program that process it before the compiler sees it.
     * #include
     * #include "myfile.h" - preprocessor to include the file
     * #if - preprocessor to only process the chunk of code if the codition is met, for example having windows libs
     * #elif 
     * #else
     * #endif
     * 
     * PREPROCESSOR DOES NOT UNDERSTAND C++
     * 
     * */
     
     
     string a;
     string bat;
     std::getline(cin, a, '\n');
     int len = a.length();
     
     for(char c: a){
         bat += c;
         string spc {};
         for(int i = 0; i<len; i++){
             spc += " ";
         }
         cout << spc + bat + reverseUntil1(bat) << endl;
         len = len - 1;
     }
     
     
}