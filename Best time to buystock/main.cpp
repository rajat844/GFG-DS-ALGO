#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int max = 0;
    int least = INT_MAX;
    int profit = 0;
    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] < least)
            least = prices[i];

        profit = prices[i] - least;
        if (profit > max) {
            max = profit;
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cout << maxProfit(prices) << endl;
}