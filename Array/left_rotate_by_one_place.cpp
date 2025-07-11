#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void one_place(int arr[], int n){
    int temp=arr[0];
    for(int i=1; i<n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n-1] = temp;
    return ;
}

void d_place(int arr[], int n, int d){
    // code here
    int temp[d];
    // int n = arr.size();
    // d=d%n;
    // vector<int> temp(arr.begin(), arr.begin() + d);
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    // int j=0;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}
void optimised_code(int arr[],int n, int d){
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

int main(){
    int arr[10]={10,20,30,40,50,100,200,400,78,95};
    // int temp[3]=
    int n=10;
    int d=4;
    // one_place(arr, n);
    // d_place(arr, n, d);
    optimised_code(arr,n, d);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}