///print all the divisors of a numbers, including number itself,, O(sqrt(n))
///gfg-- Factors Sum Poblem
#include<bits/stdc++.h>
using namespace std;
int allFactors(int n){
    int sum = 0;
    if(n==1) return 1;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            if(i==(n/i)) sum += i;
            else sum += (i+n/i);
        }
    }

    return (sum+1+n);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    cout<< allFactors(n) << "\n";

    return 0;
}
