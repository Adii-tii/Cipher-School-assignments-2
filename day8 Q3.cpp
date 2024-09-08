#include <iostream>
#include <string>
using namespace std;

void concatenateStrings(string s1, string s2)
{
    cout<<s1 + s2;
}

int main() 
{
    cout<<"first string = ";
    string string1;
    getline(cin, string1);
    string string2;
    cout<<"second string = ";
    getline(cin, string2);
    concatenateStrings(string1, string2);
}
