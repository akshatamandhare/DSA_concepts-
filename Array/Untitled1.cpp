
#include <iostream>
using namespace std;
int selection_sort(int arr[], int n){
	// largest element in array using selection for
	for (int i = 0; i < n; i++)
	{
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			int temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
	return arr[n-1];
}
int largest(int arr[], int n){
	// largest in the array using for loop
	int largest = arr[0];
	for (int i = 0; i <= n; i++)
	{

		if (arr[i] > largest)
		{
			largest = arr[i];
		}
	}
	return largest;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	//	for(int i=0; i<n; i++){
	//		cout<<arr[i]<<" ";
	//	}
	// Call functions
	int sortedMax = selection_sort(arr, n);
	int loopMax = largest(arr, n);

	cout << "Largest using selection sort: " << sortedMax << endl;
	cout << "Largest using for loop: " << loopMax << endl;
	return 0;
}
