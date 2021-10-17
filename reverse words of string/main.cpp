// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    //Function to reverse words in a given string.
    string reverseWords(string S)     {
        // code here 
        stack<string> words;
         string temp = "";
        for (int i = 0; i < S.size();i++) {
           
            if (S[i] == '.') {
                words.push(temp);
                temp = "";
                words.push(".");
            }
            else {
                temp += S[i];
            }
        }
        string ans = "";
        while (!words.empty()) {
            ans = ans + words.top();
            words.pop();
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.reverseWords(s) << endl;

}  // } Driver Code Ends