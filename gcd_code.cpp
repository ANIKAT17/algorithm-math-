#include<bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
     cout<<a<<endl;
    return a;

}
int main()
{
 gcd(4,8);
 
}
