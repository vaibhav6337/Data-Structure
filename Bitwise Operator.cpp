// <<=a*2 raise to b
// >>=a/2 raise to b

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the Number 1 : ";
    cin>>num1;
    cout<<"\nEnter the Number 2 : ";
    cin>>num2;
    cout<<"\nbitwise &(AND) "<<(num1 & num2);
    cout<<"\nbitwise |(OR) "<<(num1 | num2);
    cout<<"\nbitwise ^ (EX OR) "<<(num1 ^ num2);
    cout<<"\nbitwise << (Left Shift) "<<(num1 << 2);
    cout<<"\nbitwise >> (Right Shift) "<<(num1 >> 2);
    
    
}
