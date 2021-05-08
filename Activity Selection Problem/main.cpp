#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return(a.second<b.second)
}
class Solution{
    public:
        int maxMeetings(int start[], int end[], int n){
            vector<pair<int,int>> times(n);
            vector<pair<int,int>> solution(n);
            for(int i;i<n;i++){
                times[i].first = start[i];
                times[i].second= end[i];
            }
            times.sort(times.begin(),times.end(),sortbysec);
                int index = 0;
                int a = times[index].first;
                int b = times[index].second;
                solution.first.push_back(a);
                solution.second.push_back(b);
                for(size_t j=1;j<times.size();j++){
                    if(times[j].first> )
                    
                }
            
            
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(