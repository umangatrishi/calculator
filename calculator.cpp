#include <iostream>
using namespace std;

int main(){
    char op;
    float a, b;
    cout<<"enter value of a =";
    cin>>a;
    cout<<"enter arthmetic opreation ";
    cin>>op;
    cout<<"enter value of b =";
    cin>>b;
switch(op) {
case '+':
cout<<"the sum is ="<<a+b;
break;
case '-':
cout<<"the sum is ="<<a-b;
break;
case '*':
cout<<"the product is ="<<a*b;
break;
case '/':
cout<<"the quotient is ="<<a/b;
break;
}
 
  return 0;
}
