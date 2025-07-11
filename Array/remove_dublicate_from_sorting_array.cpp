#include<iostream>
using namespace std;

int isdublicate(int arr[], int n){
    //total deblicate element
    int i=0; 
    for(int j=1; j<n; j++){
        if (arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
        return i+1;
    }
    // which they are?
    for(int k=0; k<arr[i]; k++){
        cout<<arr[k]<<" ";
    }
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "enter element: " << endl;
    for (int i = 0; i < n; i++)

    {
        cin >> arr[i];
    }
    // int arr[n]={10,20,30,10,50,40,50};
    // // int n=arr.size();
    int dublicate=isdublicate(arr, n);
    cout << "Dublicate elements:" << dublicate << endl;
    return 0;
}