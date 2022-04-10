/**
 * C program to separate even and odd array elements in two separate array
 */

#include <iostream>

#define MAX_SIZE 1000  // Maximum size of the array
using namespace std;
/* Function to print array */
void printArray(int arr[], int len);



int main()
{
    int arr[MAX_SIZE];
    int even[MAX_SIZE], odd[MAX_SIZE];

    int evenCount, oddCount;
    int i, size;

    /* Input size of the array */
    cout<<"Enter size of the array: "<<endl;
    cin>>size;

    /* Input elements in array */
    cout<<"Enter elements in the array: "<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    evenCount = 0;
    oddCount = 0;

    for(i=0; i<size; i++)
    {
        // If arr[i] is odd
        if(arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }

    cout<<endl<<"Elements of even array: "<<endl;
    printArray(even, evenCount);

    cout<<"Elements of odd array: "<<endl;
    printArray(odd, oddCount);

    return 0;
}



/**
 * Print the entire integer array
 * @arr Integer array to be displayed or printed on screen
 * @len Length of the array
 */
void printArray(int arr[], int len)
{
    int i;
    printf("Elements in the array: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
