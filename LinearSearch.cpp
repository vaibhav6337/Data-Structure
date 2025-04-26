#include<iostream>
using namespace std;
int main(){
    int a[]={12,43,24,53};
    int t,ind=-1;
    cout<<"Enter the target element :";
    cin>>t;
    for(int i=0;i<=3;i++){
        if(a[i]==t){
            ind=i;
            break;
        }
    }
    cout<<endl<<ind;
    return 0;
}
