///divisible by 11
///complexity O(n)

#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    sync;
    string s;
    cin>>s;

    ll evensum = 0, oddsum = 0;

    for(int i=0; i<s.size(); i++){
        if(i%2==0) evensum += s[i]-'0';
        else oddsum += s[i]-'0';
    }

    ll diff = abs(evensum-oddsum);

    if(diff%11==0) cout<< "Yes divisible by 11\n";
    else cout<< "not divisible \n";

    return 0;
}
