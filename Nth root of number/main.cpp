#include <bits/stdc++.h>

using namespace std;

double multiply(int mid, int n) {
    double ans = mid;
    for (int i = 1; i <= n; i++) {
        ans *= mid;
    }
    return ans;
}

double nthRoot(int number, int n) {
    double l = 1;
    double h = number;
    double mid;
    double eps = 1e-6;

    while ((h - l) > eps) {
        mid = (h + l) / 2.0;
        if (multiply(mid, n) < number) l = mid;
        else h = mid;
    }
    cout << l <<" "<<h<<  endl;
    return  pow(number, (double)1.0 / (double)n);

}


int main() {
    int number;
    cin >> number;
    int n;
    cin >> n;

    cout << nthRoot(number, n);

    return 0;
}