/*A number is divisible by 6 it's divisible by 2 and 3.
/// A number is divisible by 2 if its last digit is divisible by 2.
A number is divisible by 3 if sum of digits is divisible by 3.
complexity - O(logn)->  divides 2 equal parts
*/
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
    if(last%2==0) flag1 = 1;

    int digitsum = 0;
    for(int i=0; i<n; i++){
        digitsum = s[i]-'0';
    }
    if(digitsum%3==0) flag2 = 1;

    if(flag1 && flag2) cout<< "Number is divisible by 6\n";
    else cout<< "Not divisible\n";

    return 0;
}
