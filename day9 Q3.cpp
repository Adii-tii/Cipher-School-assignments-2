#include <iostream>
using namespace std;

int main() 
{
    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;

    cout << "Value of num: " << num << endl;
    cout << "Value of num using ptr: " << *ptr << endl;
    cout << "Value of num using ptr2: " << **ptr2 << endl;

    return 0;
}

