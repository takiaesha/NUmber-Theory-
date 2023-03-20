/*A number is divisible by 7
complexity - O(logn)->  divides 2 equal parts
*/
#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
ll divisible7(ll n)
{
    if(n<0) return divisible7(-n);
    if(n==0 || n==7) return 1;
    if(n<10) return 0;

    return divisible7((n/10)-2*(n%10));
}
int main()
{
    sync;
    ll num;
    cin>>num;

    int ans = divisible7(num);
    //cout<< ans << endl;
    if(ans) cout<< "Yes\n";
    else cout<< "No\n";


    return 0;
}

