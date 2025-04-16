#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=n;k>i+1;k--){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
        for(int q=0;q<2*i-1;q++){
            cout<<" ";
        }
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int s=0;s<2*i-1;s++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
