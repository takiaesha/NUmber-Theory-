///sieve algorithm,mostly efficient

#include<bits/stdc++.h>
#define ll long long
using namespace std;
  ///globally all are zero
ll n = 100000000;
bool a[1000000001];
void prime(ll n)
{

    for(ll i=3; i*i<=n; i+=2){
        if(a[i]==0){
            for(ll j=i*i; j<=n; j+=(i+i)){
                a[j] = 1;
            }
        }
    }
    cout<< 2 <<" ";
    for(ll i=3; i<=n; i+=2){
        if(a[i]==0) cout<< i << " ";
    }
    cout<< "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;

    prime(n);

    return 0;
}
