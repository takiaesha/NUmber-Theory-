#include<bits/stdc++.h>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void primefactor(int n){
    int cnt,ans = 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
             cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            ans *= (cnt+1);
        }
        if(cnt>0) cout<<i<<"^"<<cnt<<endl;
    }
    if(n>1) cout<<n<<"^"<<1<<endl;

    cout<<"Total number of divisors = ";
    if(n>1) cout<< ans*2 << "\n";
    else cout<< ans << "\n";
}
int main()
{
    sync;
    int n;
    cin>>n;

    primefactor(n);

    return 0;
}
