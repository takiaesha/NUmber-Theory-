#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int fibonacci(int n){
    //cout<<"n = "<< n << endl;
    if(n<=1) return n;
    else {
        int ans = fibonacci(n-1)+fibonacci(n-2);
        // cout<< "ans = "<< ans << endl;
        return ans;
    }
}
int main()
{
    sync;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<< fibonacci(i)<< " ";
    }
    cout<< "\n";

    cout<< "value of that "<< n<<"th index is = ";
    int res = fibonacci(n);
    cout<< res << "\n";

    return 0;
}
