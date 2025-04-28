#include<iostream>
using namespace std;
int empkey[20],hashindex,m,n,hsize,*ht,elecount=0;

void createhashtable(){
    ht = new int[hsize];
    if(ht==nullptr){
        cout<<"\nMemory space is unavailable\n";
    }else{
        for(int i=0;i<hsize;i++){
            ht[i]=-1;
        }
    }
}
void insertintohash(int key){
    for(int i=0;i<n;i++){
        if(ht[i]==key){
            cout<<"Key is already present now dont insert it...";
            return;
        }
    }
    int originalindex=key%hsize;
    int index=originalindex;
    int i=0;
    while(ht[index]!=-1 && i<hsize){
        index=(originalindex+1)%key;
        i++;
    }
    if(i==hsize){
        cout<<"we cant insert in hash table \n";
    }
    else{
        ht[index]=key;
        elecount++;
    }
}

void display(){
   
    if(elecount == 0) {
        cout << "Hash table is empty\n";
        return;
    }
    for(int i = 0; i < hsize; i++) {
        cout << " " << ht[i] << " ";
    }
    cout << endl;
    
}
int main(){
    cout<<"Enter the size of hash table : ";
    cin>>hsize;
    cout<<"Enter number of records you want to enter in the hash table : ";
    cin>>n;
    cout<<"\nNow enter the records : \n";
    for(int i=0;i<n;i++){
        cin>>empkey[i];
    }
    createhashtable();
    cout<<"\ninserting keys into hashtable ................";
    for(int i=0;i<n;i++){
        if(elecount==hsize){
            cout<<"\nhash table full...\n";
            cout<<"cant insert "<<empkey[i]<<"into hash table sorry ...........\n";
        }
        insertintohash(empkey[i]);
    }
    display();
    delete[] ht;
    return 0;
}
