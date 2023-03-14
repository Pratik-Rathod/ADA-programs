//Binery Search Algorithm

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	system("cls");
	
	int mid,start = 0, end = 9 ,key;
	//Array must be sorted before searching 
	int arr[10] = {8 ,10 ,12 ,18 ,32 ,45 ,64 ,74 ,99 ,101};
	cin>>key;

	while(start<=end){
			mid = (start + end) / 2;
			
			if(arr[mid] == key){
				cout<<"Item Found on Array:"<<mid+1;
				return 0;
			}
			else if(arr[mid]>key){
				end = mid-1;
			}else{
				start = mid+1;	
			}
	}
	cout<<"Array not found";
	system("pause");
	return 0;
}
//8 10 12 18 32 45 64 74 99 101