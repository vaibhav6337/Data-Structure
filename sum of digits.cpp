#include<iostream>
using namespace std;
int sumofdigit(int n){
    int sum=0;
    while(n!=0){
        int d=n%10;
        sum=sum+d;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    sumofdigit(n);
    int i=1;
    cout<<sumofdigit(n);
    return 0;
    
}
