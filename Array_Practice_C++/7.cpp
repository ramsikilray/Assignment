/**
 * C program to search element in array
 */

#include <iostream>
#define MAX_SIZE 100  // Maximum array size
using namespace std;
int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, found;

    cout<<"Enter size of array: ";
    cin>>size;

    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"Enter element to search: ";
    cin>>toSearch;


    found = 0; 

    for(i=0; i<size; i++)
    {

        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        cout<<endl<<toSearch<<" is found at position "<<i+1;
    }
    else
    {
        cout<<endl<<toSearch<<" is not found in the array";
    }

    return 0;
}
