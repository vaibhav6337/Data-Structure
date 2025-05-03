#include<iostream>
#include<limits.h>
using namespace std;
class office {
	int n;
	int adjacent[10][10];
	string office[10];

public:
	void input();
	void display();
	void prims();
};

void office::input() {
	cout<<"Enter the number offices : ";
	cin>>n;
	cout<<"Enter the name of offices : ";
	for(int i=0; i<n; i++) {
		cin>>office[i];

	}
	cout<<"\nEnter the cost to connect the offices :\n ";
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(i==j) {
				adjacent[i][j]=0;
				continue;
			}
			cout<<"\nEnter the cost to connect "<<office[i]<<"and "<<office[j]<<":";
			cin>>adjacent[i][j];
			adjacent[j][i]=adjacent[i][j];

		}
	}
}

void office::display() {
	for(int i=0; i<n; i++) {
		cout<<"\n";
		for(int j=0; j<n; j++) {
			cout<<adjacent[i][j]<<"\t";
		}
	}
}

void office::prims() {
	int visit[n],mincost=0,minindex,count=n-1,cost=0;

	for(int i=0; i<n; i++) {
		visit[i]=0;
	}

	cout<<"\n\n-------Shortest Path ----------\n\n";
	visit[0]=1;
	cout<<office[0]<<"->";
	while(count--) {
		mincost=INT_MAX;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(visit[i]==1 && adjacent[i][j]!=0 && adjacent[i][j]<mincost && visit[j]==0) {
					mincost=adjacent[i][j];
					minindex=j;
				}
			}
		}
		visit[minindex]=1;
		cout<<office[minindex]<<"->";
		cost=cost+mincost;

	}
	cout<<"end";
	cout<<"\nminimum cost:"<<cost;
}
int main () {
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

