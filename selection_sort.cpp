#include <bits/stdc++.h>
using namespace std;
//in selection sort smaller element will reach to its position in every iteration
void ssort(int *arr,int idx,int size){
	if(idx==size)
		return ;
	int smallidx=idx;
	for(int i=idx+1;i<size;i++){
		if(arr[smallidx]>arr[i]){
			smallidx=i;
		}
	}
	swap(arr[idx],arr[smallidx]);
	return ssort(arr,idx+1,size);	
}
int main() {
	int arr[5]={9,6,2,8,1};
	int size=5;
	ssort(arr,0,size);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
