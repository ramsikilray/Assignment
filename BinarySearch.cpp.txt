#include<iostream>
#define MAX_SIZE 100

using namespace std;

int main()
{
	int arr[MAX_SIZE],temp[MAX_SIZE];
	int i,size,num,low=0,high=0,mid=0,count=0;
	
	cout<<"Enter the size of Array..."<<endl;
	cin>>size;
	
	cout<<"Enter the Elements of Array in sorted order-- "<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the Element to search..  ";
	cin>>num;
	

		low=0;
		high=size;
		mid=(low+high)/2;
	for(i=low;i<high;i++)
	{
		if(arr[mid]<num)
		{
			low=mid;
			mid=(low+high)/2;
		}
		else if(arr[mid]>num)
		{
			high=mid;
			mid=(low+high)/2;
		}
		else if(arr[mid]==num)
		{
			count=+1;
			cout<<"Element found at "<<mid+1;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not found...";
	}
	return 0;
}