#include <bits/stdc++.h>
using namespace std;
 //in insertion sort we insert element according to its position by moving element to right shift.
void isort(int *arr,int idx,int size){
	if(idx==size)
		return ;
	int temp=arr[idx];
	int j=idx-1;
	for(;j>=0;j--){
		if(arr[j]>temp)
			arr[j+1]=arr[j];
		else
			break;
	}
arr[j+1]=temp;
return isort(arr,idx+1,size);
}
int main() {
	int arr[5]={9,9,2,8,1};
	int size=5;
	isort(arr,1,size);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
