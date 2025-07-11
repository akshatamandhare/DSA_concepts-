#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unionarr(int nums1[], int nums2[], int n1z, int n2z)
{
    vector<int> ans;
    int i = 0;
    int j = 0;

    // Sort both arrays to use two-pointer method
    sort(nums1, nums1 + n1z);
    sort(nums2, nums2 + n2z);

    while (i < n1z && j < n2z)
    {
        if (nums1[i] < nums2[j])
        {
            if (ans.empty() || ans.back() != nums1[i])
                ans.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            if (ans.empty() || ans.back() != nums2[j])
                ans.push_back(nums2[j]);
            j++;
        }
        else
        { // nums1[i] == nums2[j]
            if (ans.empty() || ans.back() != nums1[i])
                ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    while (i < n1z)
    {
        if (ans.empty() || ans.back() != nums1[i])
            ans.push_back(nums1[i]);
        i++;
    }

    while (j < n2z)
    {
        if (ans.empty() || ans.back() != nums2[j])
            ans.push_back(nums2[j]);
        j++;
    }

    return ans;
}

int main()
{
    int n1[] = {1, 2, 3, 4, 5, 6, 7};
    int n2[] = {2, 4, 5, 6};
    int n1z = 7;
    int n2z = 4;

    vector<int> result = unionarr(n1, n2, n1z, n2z);

    cout << "Union: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}
