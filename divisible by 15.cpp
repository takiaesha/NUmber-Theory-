///divisible by 15
//A number is divisible by 15 if it is divisible by 5 (if the last digit is 5 or 0), and it is divisible by 3 (if sum of digits is divisible by 3)
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

    int n = s.size();

    bool flag1 = 0, flag2 = 0;

    int last = s[n-1]-'0';
    if(last==0 || last==5) flag1 = 1;


    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=  s[i]-'0';
    }

    if(sum%3==0) flag2 = 1;

    if(flag1 && flag2) cout<< "Yes \n";
    else cout<< "No\n";

    return 0;
}
