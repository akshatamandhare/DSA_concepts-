#include<iostream>
using namespace std;

bool sort(int arr[], int n){
    for(int i=0; i<n; i++){
        if (arr[i]>=arr[i-1]){

        }else
        
        {
            return false;
        }
    }
    return true; 
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
    bool sorted_or_not = sort(arr, n);
    cout << "SORTED_OR_NOT: " << (sorted_or_not ? "True" : "False") << endl;
    return 0;
}