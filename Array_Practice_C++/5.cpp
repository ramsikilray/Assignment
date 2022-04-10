/**
 * C program to print array in reverse order
 */

#include <iostream>
#define MAX_SIZE 100     
using namespace std;
int main()
	{
    int arr[MAX_SIZE];
    int size, i;

    cout<<"Enter size of the array: ";
    cin>>size;

    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"Array in reverse order: ";
    for(i = size-1; i>=0; i--)
    {
        cout<<"  "<<arr[i];
    }

    return 0;
}
