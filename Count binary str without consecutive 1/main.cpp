#include <bits/stdc++.h>

using namespace std;
int fxn(int n) {
    int a0[n + 1];
    int a1[n + 1];
    a0[0] = 1;
    a1[0] = 1;
    for (int i = 1; i <= n;i++) {
        a0[i] = a0[i - 1] + a1[i - 1];
        a1[i] = a0[i - 1];
    }
    return a0[n];
}

int main() {
    int n;
    cin >> n;
    int a = fxn(n);
    cout << a;


    return 0;
}
