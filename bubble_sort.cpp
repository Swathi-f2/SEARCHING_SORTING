#include <bits/stdc++.h>
using namespace std;
//in bubble sort last element will reach to the end of an array in every iteration
void bsort(int *arr,int size){
	if(size==0 || size==1)
		return ;
	for(int i=0;i<size-1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
	return bsort(arr,size-1);	
}
int main() {
	int arr[5]={9,6,2,8,1};
	int size=5;
	bsort(arr,size);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
