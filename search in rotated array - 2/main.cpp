#include <bits/stdc++.h>

using namespace std;

bool search(vector<int>& nums, int target) {
    int h = nums.size() - 1, l = 0, mid;

    while (l <= h) {
        mid = l + (h-l)/2;

        if(nums[mid] == target) return true;

        if(nums[mid] == nums[l] and nums[mid] == nums[h]){
            l++;
            h--;
        } 

        else if(nums[mid] >= nums[l]){
            if(nums[mid] >= target and nums[l] <= target) h = mid-1;
            else l = mid+1;
        }
        else{
            if(nums[mid] <= target and nums[h] >= target ) l = mid + 1;
            else h = mid-1; 
        }

    }
    return false;


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
    bool ans = search(nums, target);
    cout << ans;
    return 0;
}