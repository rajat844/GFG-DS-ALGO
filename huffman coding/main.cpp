// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Node {
public:
    char data;
    int freq;
    string code;
    Node* left;
    Node* right;
    Node(char d, int f) : data(d), freq(f) {
        left = right = NULL;
        code = "";
    }

};

struct compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};



class Solution {
public:
    void inorder(Node* root, string s, vector<string>& v) {
        if (!root) return;
        s += root->code;
        inorder(root->left, s, v);
        inorder(root->right, s, v);
        if (!root->left and !root->right)
            v.push_back(s);
    }

    vector<string> huffmanCodes(string s, vector<int> f, int n) {
        // Code here
        priority_queue<Node*, vector<Node*>, compare>q;
        for (int i = 0; i < n;i++) {
            Node* nd = new Node(s[i], f[i]);
            q.push(nd);
        }

        while (q.size() != 1) {
            auto x = q.top();
            q.pop();
            auto y = q.top();
            q.pop();
            auto z = new Node(' ', x->freq + y->freq);
            if (x->freq <= y->freq) {
                x->code = "0";
                y->code = "1";
                z->left = x;
                z->right = y;
            }
            else {
                x->code = "1";
                y->code = "0";
                z->left = y;
                z->right = x;
            }
            q.push(z);
        }
        vector<string>v;
        Node* root = q.top();
        inorder(root, "", v);

        return v;

    }


};

// { Driver Code Starts.
int main() {
    string S;
    cin >> S;
    int N = S.length();
    vector<int> f(N);
    for (int i = 0;i < N;i++) {
        cin >> f[i];
    }
    Solution ob;
    vector<string> ans = ob.huffmanCodes(S, f, N);
    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
    return 0;
}  // } Driver Code Ends