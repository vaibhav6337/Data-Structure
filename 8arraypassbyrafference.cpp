#include<iostream>
using namespace std;
void changearr(int a[],int size){
    for(int i=0;i<=2;i++){
        a[i]=2*a[i];
    }
}
int main(){
    int a[]={1,2,3};
    changearr(a,3); 
	//Here in a only the address of 0th element will be pass so that in main function the changes in 
	//changearr function will be reflect
    
    cout<<"\nElements in array  :";
    for(int i=0;i<=2;i++){
        cout<<a[i]<<endl;
    }
    
}
