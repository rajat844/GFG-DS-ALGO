#include <bits/stdc++.h>

using namespace std;

int search1(vector<int>& nums, int target, int low, int high) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[low] <= nums[mid]) {
            if (target >= nums[low] and target <= nums[mid])
                return (search1(nums, target, low, mid - 1));
            else
                return(search1(nums, target, mid + 1, high));
        }
        else {
            if (target >= nums[mid] and target <= nums[high])
                return (search1(nums, target, mid + 1, high));
            else {
                return search1(nums, target, low, mid - 1);
            }
        }
}

int search(vector<int>& nums, int target) {
    int high = nums.size() - 1;
    int low = 0;
    int ans = search1(nums, target, low, high);
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n;i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    int ans = search(nums, target);
    cout << ans;
    return 0;
}