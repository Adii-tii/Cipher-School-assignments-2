#include <iostream>
#include <string>
#include <cctype>
#include <algorithm> 
using namespace std;

bool isPalindrome(string str)
{
    string processedString = "";
    for (char c : str)
    {
        if (isalnum(c))
        {
            processedString += tolower(c);
        }
    }
    
    string copy = processedString;
    reverse(processedString.begin(), processedString.end());
    
    return processedString == copy;
}

int main()
{
    string str;
    getline(cin, str);

    if (isPalindrome(str))
    {
        cout << "The string is a palindrome" << endl;
    }
    else
    {
        cout << "The string is not a palindrome" << endl;
    }
    
    return 0;
}

