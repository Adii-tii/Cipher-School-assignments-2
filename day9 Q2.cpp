#include <iostream>
using namespace std;

int main() 
{
    int size = 5;
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    for(int i = 0 ; i  < size ; i++)
    {
        cout<<*ptr<<endl;
        ptr = ptr + 1;
    }

}
