#include <bits/stdc++.h>

using namespace std;
vector<string> permutationfxn(string str) {
    sort(str.begin(), str.end());
    vector<string> res;
    do{
        res.push_back(str);
    }while(next_permutation(str.begin(),str.end()));

    return res;

}

int main() {
    string str;
    cin>>str;
    vector<string> permutation = permutationfxn(str);
    for (auto i : permutation) {
        cout<< i << " ";
    }
    return 0;
}