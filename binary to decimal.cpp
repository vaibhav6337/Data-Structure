#include<iostream>
using namespace std;
int main(){
    
    int num,rem,power=1,ans=0;
    cout<<"Enter the Number : ";
    cin>>num;
    
    while(num>0){
        rem=num%10;
        ans=ans+(power*rem);
        num=num/10;
        power=power*2;
        
    }
    
    cout<<"\n"<<ans;
    return 0;
}
