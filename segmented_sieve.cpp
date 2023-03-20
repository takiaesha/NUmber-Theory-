//segmented sieve algorithm

#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
vector<ll> v;

void sieve(ll n){
    ll prime[n]= {};

    for(ll i=3; i*i<=n; i+=2){
        if(prime[i]==0){
            for(ll j=i*i; j<=n; j+=i+i){
                prime[j] = 1;
            }
        }
    }
    v.push_back(2);

    for(ll i=3; i<=n; i+=2){
        if(prime[i]==0) v.push_back(i);
    }
}

void segmented_sieve(ll l,ll r){
    if(l==1) l++;
    ll mx = r-l+1;
    ll a[mx+1] = {};

    for(int p:v){
        if(p*p<=r){
            int i = (l/p)*p;
            if(i<l) i+=p;
            for(; i<=r; i+=p){
                if(i!=p){
                    a[i-l] = 1;
                }
            }
        }
    }

    for(int i=0; i<mx; i++){
        if(a[i]==0) cout<< i+l <<" ";
    } cout<< '\n';
}
int main()
{
    sync;
    sieve(100000);

    ll l,r;
    cin>>l>>r;

    segmented_sieve(l,r);

    return 0;

}
