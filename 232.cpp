#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        {
            cout<<res*res<<endl;
        }
        return res * res;


}
int main()
{
 binpow(3,2);
 
}
