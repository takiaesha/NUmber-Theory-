///divisible by 12
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


    //check for 4
    int n = s.size();
    int flag1 = 0, flag2 = 0;

    int last = s[n-1]-'0';
    int last2 = s[n-2]-'0';
    int digit = last2*10+last;
    if(digit%4==0) flag1 = 1;

    //check for 3
    int digitsum = 0;
    for(int i=0; i<n; i++){
        digitsum += s[i]-'0';
    }

    if(digitsum%3==0) flag2 = 1;

    if(flag1 && flag2) cout<< "Number is divisible by 12\n";
    else cout << "Not divisible\n";


    return 0;

}
