#include<iostream>
#include<limits.h>
using namespace std;

class office{
    public:
    int n;
    int adjacent[10][10];
    string office[10];
    
    void input();
    void display();
    void prims();
};

void office::input(){
    cout<<"\nEnter the number of offices : ";
    cin>>n;
    cout<<"\nEnter the names of offices : \n";
    for(int i=0;i<n;i++){
        cout<<" office "<<i<<":";
        cin>>office[i];
    }
    cout<<"\nEnter the cost of offices : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==j){
                adjacent[i][j]=0;
                continue;
            }
            cout<<"Enter the cost from office "<<i+1<<"to office"<<j+1<<":";
            cin>>adjacent[i][j];
            adjacent[j][i]=adjacent[i][j];
        }
    }
}
void office::display(){
    for(int i=0;i<n;i++){
        cout<<endl;
        for(int j=0;j<n;j++){
            cout<<adjacent[i][j]<<" ";
        }
    }
}
void office::prims(){
    int cost=0,mincost=0,minindex,count=n-1,visit[n];
    for(int i=0;i<n;i++){
        visit[i]=0;
    }
    cout<<"\n\nShortest Path : "<<endl;
    visit[0]=1;
    cout<<office[0]<<"->";
    
    while(count--){
        mincost=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(visit[i]==1 && adjacent[i][j]<mincost && adjacent[i][j]!=0 && visit[j]==0 ){
                    mincost=adjacent[i][j];
                    minindex=j;
                }
            }
        }
        visit[minindex]=1;
        cout<<office[minindex]<<"->";
        cost=cost+mincost;
    }
    cout<<"End";
    cout<<"\nMin Cost : "<<cost;
    
}
int main(){
    office o1;
    int choice;
    do {
        cout << "\n\nMINIMUM SPANNING TREE"
             << "\n1. Input data"
             << "\n2. Display data"
             << "\n3. Calculate minimum cost"
             << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                o1.input ();
                break;
            case 2:
                o1.display ();
                break;
            case 3:
                o1.prims ();
                break;
        }
    } while (choice != 4);
    return 0;
}
