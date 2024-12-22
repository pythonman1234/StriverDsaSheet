#include<iostream> // please note it this is naieve approach you can also run loop for sqrt(n) in order to achieve somewhat better time complexity
using namespace std;

int main(int n){
  for(int i=1;i<=n;i++){
if(n%i==0){
cout<<i;
}
  }
}

