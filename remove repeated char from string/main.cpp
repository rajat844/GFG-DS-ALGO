// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    string remove(string s) {
        // code here
        char a = s[0];
        int count = 1;
        int i = 1;
        int f = 0;
        while (i<=s.length()) {
            if (a == s[i]) {
                count++;
            }
            else {
                if (count > 1) {
                    s.erase(i - count, count);
                    i = i - count;
                    f = 1;
                }
                a = s[i];
                count = 1;
            }
            i++;
        }
        if(f==1){
            s = remove(s);
        }
        return s;
    }
};

// { Driver Code Starts.

int main() {
    string s;
    getline(cin, s);
    Solution ob;
    cout << ob.remove(s) << "\n";
    return 0;
}  // } Driver Code Ends