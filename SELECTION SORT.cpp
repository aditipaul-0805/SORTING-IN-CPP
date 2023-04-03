#include <iostream>
using namespace std;
int selectionSort(int arr[],int n){
	
	for(int i=0;i<n-1;i++)
	{
		int indexMin=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[indexMin]){
				indexMin=j;
	     	}
	     	
     	}
			 	int temp=arr[indexMin];
				arr[indexMin]=arr[i];
				arr[i]=temp;
			
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
	
	selectionSort(arr,n);
	cout<<"THE ELEMENT IN SORTED ORDER IS ";
		for(int i=0;i<n;i++){
	           	cout<<arr[i]<<" ";
	}
}
