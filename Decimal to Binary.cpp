#include<iostream>
using namespace std;
int main(){
    
    int num,rem,power=1,ans=0;
    cout<<"Enter the Number : ";
    cin>>num;
    
    while(num>0){
        rem=num%2;
        num=num/2;
        ans+=(power*rem);
        power=power*10;
        
    }
    
    cout<<"\n"<<ans;
}
