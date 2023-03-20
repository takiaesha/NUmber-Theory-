///find the sum of the all divisors of a natural number except itself, O(sqrt(n))
#include<bits/stdc++.h>
using namespace std;
int divSum(int n){
    int sum = 0;
    if(n==1) return sum;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            if(i==(n/i)) sum += i;
            else sum += (i+n/i);
        }
    }

    return (sum+1);  // with the digit (sum+1+n);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    cout<< divSum(n) << "\n";


    return 0;
}
