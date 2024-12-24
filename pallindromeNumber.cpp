#include<iostream>
using namespace std;
 bool pallindrome(int n)
{
  int reverse_number = 0;
  int duplicate = 0;
while(n>0){
int last_digit = n%10;
reverse_number = (reverse_number*10)+last_digit;
n = n/10;
}
if(duplicate==reverse_number){
return true;
}
else{
return false;
}
}

int main()
{
  int number = 4554;
if(pallindrome(number)){
cout<<"Number is pallindrome"<<endl;
}
else{
cout<<"Number is not pallindrome"<<endl;
}
