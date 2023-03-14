/*
Problem: Given an array arr[] of size n,The task is to find the first repeating element in the array of integers. i.e an element that occurs more than once and whose index of first occurrence is smallest.
*/
//Simple input 7 1 5 3 4 3 5 6 output should be 2 1'ns indexing 

#include<bits/stdc++.h>
using namespace std;

//Logicaly Correct but it will be rejected because of time complexcity will be n^2 it should be n 
int myLogic(int arr[],int n){
	int min = INT_MAX - 1;
	
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(arr[i] ==  arr[j]){
				if(i<min){
					min = i;
				}
			}
		}
	}
	return min+1;
}

int main(){
	system("cls");
	int arr[100],n,min_idx[100],minIdx;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		min_idx[i] =-1;
	}
	min_idx[n] = -1;

	for(int i=0;i<n;i++){
		if(min_idx[arr[i]] != -1){
			minIdx = min(minIdx,min_idx[arr[i]]);
		}else{
			min_idx[arr[i]] = i;
		}
}	
	cout<<minIdx+1;
	system("pause");
	return 0;
}