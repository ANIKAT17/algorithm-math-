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
// here is another code for the gcd 

#include<bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
    return  b ? gcd (b, a % b) : a;
}
int main()
{

 cout<<gcd(2,4)<<endl;
 
}
