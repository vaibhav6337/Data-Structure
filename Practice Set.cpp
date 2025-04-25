#include<iostream>
using namespace std;
int main(){
   char c;
   cout<<"Enter the character : ";
   cin>>c;
   if(c>='a' && c<='z'){
       cout<<"lower case\n";
   }
   else if(c>='A' && c<='Z'){
       cout<<"Upper Case \n";
   }
   else{
       cout<<"Please Enter the character This is wrong\n";
   }
    return 0;
    }

