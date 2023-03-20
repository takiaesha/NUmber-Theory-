#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

void sieve(ll n){

    ll a[n] = {};
    vector<ll> v;

    for(ll i=3; i*i<=n; i+=2){
        if(a[i]==0){
            for(ll j=i*i; j<=n; j+=i+i){
                a[j] = 1;
            }
        }
    }

    for(ll i=3; i<=n; i+=2){
        if(a[i]==0) v.push_back(i);
    }

    ll cnt;
    for(ll i=0; v[i]<=n; i++){
        if(n%v[i]==0){
            cnt = 0;
            while(n%v[i]==0){
                cnt++;
                n /= v[i];
               // cout<< v[i] << "\n";
            }
            cout<< v[i] << "^"<< cnt << "\n";
           // cout<< v[i] << "\n";
        }
    }
}

int main()
{
    sync;
    ll n;
    cin>>n;

    sieve(n);

    return 0;
}

