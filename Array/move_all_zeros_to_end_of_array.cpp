#include<iostream>
using namespace std;
void optimised_code(int arr[], int n){
    int j=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return;
    for(int i=j+1; i<n; i++){
        if (arr[i]!=0)
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
} 
int main()
{
    int arr[10] = {0, 20, 30, 0, 50, 100, 0, 0, 78, 95};
    // int temp[3]=
    int n = 10;
    int d = 4;
    // one_place(arr, n);
    // d_place(arr, n, d);
    optimised_code(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}