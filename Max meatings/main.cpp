// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) {
    return(a.second < b.second);
}
class Solution {
public:
    vector<pair<int, int>> maxMeetings(vector<pair<int, int>> times, int n) {
        vector<pair<int, int>> solution;
        sort(times.begin(), times.end(), sortbysec);
        int index = 0;
        int a = times[index].first;
        int b = times[index].second;
        solution.push_back(make_pair(a, b));
        int p = 0;
        for (size_t q = 1;q < times.size();q++) {
            if (times[q].first > times[p].second) {
                p = q;
                a = times[q].first;
                b = times[q].second;
                solution.push_back(make_pair(a, b));
            }
        }
        return solution;
    }
};

// { Driver Code Starts.
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> times(n);
    for (int i = 0; i < n; i++)
        cin >> times[i].first;
    for (int j = 0; j < n; j++)
        cin >> times[j].second;
    Solution ob;
    vector<pair<int, int>> solution = ob.maxMeetings(times, n);
    for (int x = 0;x < solution.size();x++) {
        cout << solution[x].first << " " << solution[x].second << endl;
    }
    cout << solution.size() << endl;
    return 0;
}  // } Driver Code Ends