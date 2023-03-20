///very big number is divisible by 4 or not
/// complexity O(n)

#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    //sync;
    string s; cin>>s;

    int l = s.size();
    int last = s[l-1]-'0';

    if(l==1 && last%4==0) cout<< "Yes divisible\n";
    else {

        int second_last =  s[l-2]-'0';

        int num = second_last*10+last;

        if(num%4==0) cout<< "Yes divisible \n";
        else cout<< "Not divisible\n";
    }

    ///using substring,stoi function

    string p,q;
    cin>>p;

    int l1 = p.size();
    int sesh = p[l1-1]-'0';

    if(l1==1 && sesh%4==0) cout<< "Yes\n";
    else{

        p = p.substr(l1-3,2);
        //cout<< p << endl;

        int q = stoi(p);
        if(q%4==0) cout<< "Yes\n";
        else cout<< "No\n";
    }


    return 0;

}
