#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int k,int l,int h){
	if(l>h)
		return -1;
	int mid=l+(h-l)/2;
	if(arr[mid]==k)
		return mid;//if we return 1 then we say that element is found; 
	if(k>arr[mid])
		return search(arr,k,mid+1,h);
	else
		return search(arr,k,l,mid-1);
 
}
int main() {
	int arr[5]={1,2,3,4,5};
	int k=4,size=5;
	int i=search(arr,k,0,size-1);
	cout<<i;
	return 0;
}
