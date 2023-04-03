#include <iostream>
using namespace std;
int bubbleSort(int arr[],int n){
	
	int counter=1;
	while(counter<n){
	
	for(int i=0; i<n-counter; i++)
	{
			if(arr[i]>arr[i+1]){
			
			 	int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			
		}
	}
	counter++;
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
	
	bubbleSort(arr,n);
	cout<<"THE ELEMENT IN SORTED ORDER IS ";
		for(int i=0;i<n;i++){
	           	cout<<arr[i]<<" ";
	}
}
