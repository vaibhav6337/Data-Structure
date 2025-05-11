#include<iostream>
using namespace std;

int sumn(int n){
    int sum=0;
   for(int i=1;i<=n;i++){
       sum=sum+i;
   } 
   return sum;
}
int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    
    int s=sumn(n);
    cout<<"\nSum of Numbers from 1 to N  is "<<s;
    return 0;
}
