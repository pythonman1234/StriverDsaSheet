#include<iostream>
#include<algorithm>
using namespace std;

int findGCD(int a, int b)
{
  while(a>0&&b>0)
{
a = a%b;
}
else{
b = b%a;
}
}
if(a==b)
  return a;

int main()
{
  int n1 = 20, int n2 = 15;
int gcd = findGCD(n1,n2);
cout<<"GCD is"<n1<<n2<<endl;
return 0;
}

