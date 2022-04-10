/**
 * C program to read and print elements in an array
 */

#include <iostream>
#define MAX_SIZE 1000 

using namespace std;
int main()
{
    int arr[MAX_SIZE]; 
    int i, n;

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter %d elements in the array : "cout<<n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"Elements in array are: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i];
    }

    return 0;
}
