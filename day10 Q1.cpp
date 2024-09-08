// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    cout<<"Enter the size of the array : ";
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout<<"enter the number at index "<<i<<" = ";
        cin>>arr[i];
    }
    
    cout<<findMax(arr, size);
    return 0;
}
