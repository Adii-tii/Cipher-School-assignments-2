#include <iostream>
#include <string>
using namespace std;

int stringLength(string s)
{
    return s.length();
}

int main() 
{
    cout<<"str = ";
    string s;
    getline(cin, s);
    cout<<stringLength(s);
}
