#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) {
    set<char> st;
    int n = 0;

    for (int i = 0; i < s.size(); i++) {

        if (st.find(s[i]) == st.end()) {
            st.insert(s[i]);
        }
        else {
            if (n < st.size()) n = st.size();
            st.clear();
            i--;
        }
    }
    if (n < st.size()) n = st.size();

    return n;

}

int main() {
    string s;
    
    cin >> s;

    cout << lengthOfLongestSubstring(s) << endl;

    return 0;
}