#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    else gcd(b,a%b);
}
int findGCD(int a[], int n){
    int ans = a[0];
    for(int i=1; i<n; i++){
        ans = gcd(ans,a[i]);

        if(ans==1) return 1;
    }
    return ans;
}
int main()
{
    sync;
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int a[n+4];
        for(int i=0; i<n; i++) cin>>a[i];

        int res = findGCD(a,n);
        cout<< "GCD of array elements is = "<< res << '\n';

    }
    return 0;
}
