#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int sum = 0;
    int x = num;
    while(num>0){
        int ld = num%10;
        sum = sum+(ld*ld*ld);
        num = num/10;
    }
    if(sum==x){
        cout<<"armstrong number";
    }
    else{
        cout<<"no armstrong number";
    }
}
