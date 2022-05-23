#include<bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}
int main()
{

 cout<<lcm(2,3)<<endl;
 
}
