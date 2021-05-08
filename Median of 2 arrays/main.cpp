#include <bits/stdc++.h>

using namespace std;

int median(int ar1[], int ar2[], int n, int m) {
    sort(ar1, ar1 + n);
    sort(ar2, ar2 + m);

    int i = 0;
    int j = 0;
    int count;
    int m1 = -1, m2 = -1;

    if ((m + n) % 2 == 1)
    {
        for (count = 0; count <= (n + m) / 2; count++)
        {
            if (i != n && j != m)
            {
                m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
            }
            else if (i < n)
            {
                m1 = ar1[i++];
            }
            else
            {
                m1 = ar2[j++];
            }
        }
        return m1;
    }
    else
    {
        for (count = 0; count <= (n + m) / 2; count++)
        {
            m2 = m1;
            if (i != n && j != m)
            {
                m1 = (ar1[i] > ar2[j]) ? ar2[j++] : ar1[i++];
            }
            else if (i < n)
            {
                m1 = ar1[i++];
            }
            else
            {
                m1 = ar2[j++];
            }
        }
        return (m1 + m2) / 2;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int ar1[n];
    int ar2[m];

    for (int i = 0; i < n; i++) {
        cin >> ar1[i];
    }

    for (int j = 0; j < m; j++) {
        cin >> ar1[j];
    }

    cout << median(ar1, ar2, n, m);

    return 0;
}


