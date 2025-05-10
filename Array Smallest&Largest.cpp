#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a[5],l=INT_MIN,s=INT_MAX,i1,i2;
    cout<<"Enter the elements in array a : ";
    for(int i=0;i<=4;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<=4;i++){
        if(a[i]>l){
            l=a[i];
            i1=i;
        }
    }
    
    for(int i=0;i<=4;i++){
        if(a[i]<s){
            s=a[i];
            i2=i;
        }
    }
    cout<<endl<<"Smallest Number :"<<s;
    cout<<endl<<"Largest Number :"<<l;
    cout<<endl<<"Smallest Number index :"<<i1;
    cout<<endl<<"Largest Number index :"<<i2;
    return 0;
}
