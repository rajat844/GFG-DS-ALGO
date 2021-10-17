#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return(a.second<b.second)
}
class Solution{
    public:
    static bool mycomp(pair<int,int> a, pair<int,int>b){
        return a.second < b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> room;
        for(int i = 0; i< n;i++){
            room.push_back(make_pair(start[i],end[i]));
        }
        sort(room.begin(),room.end(),mycomp);
        
        int maxmeet = 1;
        int edm = room[0].second;
        for(int i = 1; i<n;i++){
            if(room[i].first > edm){
                edm = room[i].second;
                maxmeet++;
            }
        }
        return maxmeet;
        
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