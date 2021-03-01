#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
	cin>>n;
	int a[n];
	for(int i{0};i<n;i++){
	    cin>>a[i];
	}
	int mid=0;
	int high = n-1;
	int low = 0;
	while(mid <= high){
	    if(a[mid]<0){
	        swap(a[mid++],a[low++]);
	    }
	    else if(a[mid]==0){
	        mid++;
	    }
	    else if(a[mid]>0){
	        swap(a[mid],a[high--]);
	    }
	}
	for(int i{0};i<n;i++){
	    cout<<a[1]<<" ";
	}
	return 0;
}