#include<iostream>
#include <climits>
using namespace std;

int secondlargest(int arr[], int n)
{
    int largest = INT_MIN;
    int slargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] != largest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondsmallest(int arr[], int n)
{
    int smallest = INT_MAX;
    int ssmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < ssmallest && arr[i] != smallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin >> n;
    int arr[n];
    cout<<"enter element: "<<endl;
    for (int i = 0; i < n; i++)

    {
        cin >> arr[i];
    }
    int slarge = secondlargest(arr, n);
    int ssmall = secondsmallest(arr, n);
    cout<<"Second largest:"<<slarge<<endl;
    cout<<"Second Smallest:"<<ssmall<<endl;
    return 0;
}