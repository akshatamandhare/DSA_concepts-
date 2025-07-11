#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersection(int nums1[], int nums2[], int n1z, int n2z)
{
    vector<int> ans;
    int i = 0, j = 0;

    // First sort both arrays
    sort(nums1, nums1 + n1z);
    sort(nums2, nums2 + n2z);

    while (i < n1z && j < n2z)
    {
        if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            if (ans.empty() || ans.back() != nums1[i]) // avoid duplicates
                ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    int n1[] = {1, 2, 3, 4, 5, 6, 7};
    int n2[] = {2, 4, 5, 6};
    int n1z = 7;
    int n2z = 4;

    vector<int> result = intersection(n1, n2, n1z, n2z);

    cout << "Intersection: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}
