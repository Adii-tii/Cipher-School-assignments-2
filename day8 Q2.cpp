#include <iostream>
#include <string>
using namespace std;

int countCharacter(string s, char c)
{
    int count = 0;
    for(char ch : s)
    {
        if (ch == c)
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    cout<<"str = ";
    string s;
    getline(cin, s);
    cout<<endl;
    cout<<"character = ";
    char c;
    cin>>c;
    cout<<countCharacter(s, c);
}
