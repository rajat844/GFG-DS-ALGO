#include <iostream>

using namespace std;

void swap(int &a,int &b){
    int temp;
    temp = a;
    a= b;
    b = temp;
}

void partition(int arr[],int n,int number){
    int begin = 0;
    int middle = 0;
    int end = n-1;
    while(middle < end ){
        if(arr[middle] < number && arr[middle]> 0){
            swap(arr[middle],arr[begin]);
            middle++;
            begin++;
        }
        if(arr[middle] >= number && arr[middle] > 0){
            middle++;
        }
        if(arr[middle] <0){
            swap(arr[middle],arr[end]);
            end--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    int number;
    void partition(int arr[],int n, int number);
    return 0;
}