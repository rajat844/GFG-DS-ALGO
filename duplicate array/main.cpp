#include <bits/stdc++.h>

using namespace std;
int findDuplicate(vector<int>& nums)
{
    int repeated;
    sort(nums.begin(), nums.end());
    int previous = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (previous == nums[i]) {
            repeated = previous;
            break;
        }
        else {
            previous = nums[i];
        }
    }
    return repeated;
}


int main() {
    int n;
    cin >> n;
    vector <int> nums(n);
    for (int i = 0;i < n;i++) {
        cin >> nums[i];
    }
    int repeat = findDuplicate(nums);
    cout << repeat;

    return 0;
}