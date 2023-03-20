#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
bool divide(ll n){
  while(n/100>0){
    ll last_digit = n%10;
    n /= 10;
    n += last_digit*3;
  }

  if(n%29==0) return true;
  else return false;
}
int main()
{
    sync;
    ll num;
    cin>>num;

    bool ans = divide(num);

    if(ans) cout<< "Yes\n";
    else cout<< "No\n";

    return 0;
}
