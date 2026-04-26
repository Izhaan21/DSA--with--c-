#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums1 = {2, 3, 2};
    vector<int> nums2 = {1, 2};
    set<int> st;
    vector<int> ans;

    int i = 0, j = 0;
    int n = nums1.size();
    int m = nums2.size();

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    while (i < n && j < m) {
        if (nums1[i] == nums2[j]) {
            st.insert(nums1[i]);
            i++;
            j++;
        } 
        else if (nums1[i] < nums2[j]) {
            i++;
        } 
        else {
            j++;
        }
    }

    for (auto x : st) {
        ans.push_back(x);
    }

    // Print the intersection result
    cout << "Intersection elements: ";
    for (auto x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
