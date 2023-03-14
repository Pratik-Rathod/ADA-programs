//sorting algorithms 
//Insertion sort 
#include <iostream>
using namespace std;
int printArray(int arr[],int n){	
	for(int i=0;i<n;i++){
		cout<<arr[i] << " ";
	}
	return 0;
}

int insertionSort(int arr[],int n){
	
	for(int i=1;i<n;i++){
		int currentEle= arr[i];
		int j=i-1;
		while(arr[j] > currentEle && j>=0){
			arr[j+1] =  arr[j];
			j--;
		}
		arr[j+1] = currentEle;
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
	insertionSort(arr,n);

	system("pause"); 
	return 0;
}
//10 12 3 43 1 23 11 29 45 24 21