///divisible by 13
///complexity O(n)

#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

bool divisible13(ll n){

    while(n/100>0){
        ll last_digit = n%10;
        n /= 10;
        n += last_digit*4;
    }

    if(n%13==0) return true;
    else return false;
}
int main()
{
    sync;
    ll num;
    cin>>num;

    bool ans = divisible13(num);

    //cout<< ans <<  endl;
    if(ans) cout<< "Yes\n";
    else cout<< "No\n";

    return 0;

}
