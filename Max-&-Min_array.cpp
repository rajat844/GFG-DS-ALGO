#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{
  public:
    int middle(int a, int b, int c){
        int x = a-b;
        int y = b-c;
        int z = c-a;
        if(x*y > 0)
        return b;
        if (y*z > 0)
        return c;
        return a;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}  // } Driver Code Ends