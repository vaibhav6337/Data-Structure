#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=n;k>i+1;k--){
            cout<<"  ";
        }
       
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        
        }
        for(int q=i;q>=1;q--){
            cout<<q<<" ";
        }
        cout<<endl;
    }
}
