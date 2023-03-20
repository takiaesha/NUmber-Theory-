///divisible by 9
///complexity O(log(n))

#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

void divisible9(string s){
   ll digitsum = 0;

   for(int i=0; i<s.size(); i++){
    digitsum = s[i]-'0';
   }

   if(digitsum%9==0) cout<< "Yes\n";
   else cout<< "No\n";
}

int main()
{
    sync;
    string s;
    cin>>s;

    divisible9(s);

    return 0;
}
