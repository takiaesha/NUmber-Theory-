///very big number is divisible by 3 or not
/// complexity O(n)

#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    sync;
    string s;
    cin>>s;

    ll digitsum = 0;
    for(int i=0; i<s.size(); i++){
        digitsum += s[i]-'0';
    }

    if(digitsum%3==0) cout<< "Number is divisible by 3\n";
    else cout<< "Not divisible\n";

    return 0;
}
