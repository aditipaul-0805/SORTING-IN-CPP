#include <iostream>
using namespace std;
int insertionSort(int arr[],int n){
	
	for(int i=0;i<n;i++)
	{
		int current = arr[i];
		int j = i-1;
		while(arr[j]>current && j>=0)
		{
				arr[j+1]=arr[j];
			    j--;
		}
		arr[j+1]=current;
	}
}

int main(){
	int n;
	cout<<"ENTER THE VALUE OF N ";
	cin>>n;
	int arr[n];
	cout<<"ENTER THE NUMBERS IN ARRAY ";
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	insertionSort(arr,n);
	cout<<"THE ELEMENT IN SORTED ORDER IS ";
		for(int i=0;i<n;i++){
	           	cout<<arr[i]<<" ";
	}
}
