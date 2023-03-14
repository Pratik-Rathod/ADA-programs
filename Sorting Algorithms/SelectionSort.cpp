//sorting algorithms 
//Selection Sort 
#include <iostream>
using namespace std;
int printArray(int arr[],int n){	
	for(int i=0;i<n;i++){
		cout<<arr[i] << " ";
	}
	return 0;
}
//10 12 3 43 1 23 11 29 45 24 21
int selectionSort(int arr[],int n){
	
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(arr[j]<arr[i]){			
			 int temp = arr[j] ;
			 arr[j] = arr[i];
			 arr[i] = temp;
			}
			
		}
	}
	
	cout<<endl<<"sorted Array : ";
	printArray(arr,n);
	return 0;
}

int main(){
	system("cls");
	int arr[100],n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl<<"User Array : ";
	printArray(arr,n);
	selectionSort(arr,n);

	system("pause"); 
	return 0;
}
