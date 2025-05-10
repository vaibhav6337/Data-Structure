#include<iostream>
using namespace std;
//Time Complexity of this function is o(n)
void reversearray(int arr[],int size){
int start=0,end=size-1;
while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
    
}    

int main(){
    int a[]={12,24,34,53,45};
   reversearray(a,5);
   for(int i=0;i<5;i++){
       cout<<endl<<a[i];
   }
   
    return 0;
}
