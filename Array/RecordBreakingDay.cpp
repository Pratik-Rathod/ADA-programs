//Record Breaking Day ^Google Kick Start
//sample test case 
//8 1 2 0 7 2 0 2 2
#include <bits/stdc++.h>
using namespace std;
int main(){
	system("cls");
	
	int arr[100],n;
	int ans = 0;
	int mx = -1;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>mx && arr[i]>arr[i+1]){
			ans++;
		}
		mx =  max(mx,arr[i]);
	}
	cout<<ans;
	system("pause");
	return 0;
}
