//sorting algorithms 
//Bubble Sort 
#include <iostream>
using namespace std;
int printArray(int arr[],int n){	
	for(int i=0;i<n;i++){
		cout<<arr[i] << " ";
	}
	return 0;
}

int bubbleSort(int arr[],int n){
	
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				int swap = arr[j];
				arr[j] =  arr[j+1];
				arr[j+1] = swap;
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
	bubbleSort(arr,n);

	system("pause"); 
	return 0;
}
//10 12 3 43 1 23 11 29 45 24 21