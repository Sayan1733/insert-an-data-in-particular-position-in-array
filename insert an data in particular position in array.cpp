#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,pos,data,n;
	cout<<"Enter The Size of array: ";
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(i=1;i<=n;i++){
		
		cout<<arr[i]<<",";
	}
	cout<<"\nEnter The Positon to insert data: ";
	cin>>pos;
	cin>>data;
	for(i=n+1;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	
	arr[pos]=data;
	for(i=1;i<=n+1;i++){
		
		cout<<arr[i]<<",";
	}
	return 0;
}
