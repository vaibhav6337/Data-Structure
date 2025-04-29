#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
struct node{
    string label;
    int child_count;
    node* child[10];
};

class booktree{
    private:
    node* root;
    public:
    booktree(){
        root=nullptr;
    }
    void createtree();
    void display(node* nod);
    node* getroot(){
        return root;
    }
};

void booktree::createtree(){
    int totalchapter;
    root=new node();
    cout<<"\nEnter the name of the book : ";
    cin>>root->label;
    cout<<"\nEnter the number of chapters in the book : ";
    cin>>totalchapter;
    root->child_count=totalchapter;
    
    for(int i=0;i<totalchapter;i++){
        root->child[i]=new node();
        
        cout<<"\nEnter the name of chapter : ";
        cin>>root->child[i]->label;
        
        cout<<"\nEnter the number of sections present in the chapter "<<i+1<<" : ";
        cin>>root->child[i]->child_count;
        for(int j=0;j<root->child[i]->child_count;j++){
            root->child[i]->child[j]=new node();
            cout<<"\nEnter the name of section : ";
            cin>>root->child[i]->child[j]->label;
            
            cout<<"\nEnter the number of subsections present in the section "<<j+1<<" : ";
            cin>>root->child[i]->child[j]->child_count;
            
            for(int k=0;k<root->child[i]->child[j]->child_count;k++){
                root->child[i]->child[j]->child[k]=new node();
                cout<<"\nEnter the name of subsection : ";
                cin>>root->child[i]->child[j]->child[k]->label;
                
            }
        }
    }
    
}

void booktree::display(node* nod){
    if(nod!=nullptr){
        cout<<"\n\n-------Book Hierarchy----------";
        cout<<"\nBook Title :"<<nod->label;
        
        for(int i=0;i<nod->child_count;i++){
            cout<<"\n\nChapter "<<i+1<<" : "<<nod->child[i]->label;
            cout<<"\n    Sections : "<<endl;
            
            for(int j=0;j<nod->child[i]->child_count;j++){
                cout<<"\n \t Section "<<j+1<<" : "<<nod->child[i]->child[j]->label<<endl;
                cout<<"\n             Subsections : "<<endl;
                for(int k=0;k<nod->child[i]->child[j]->child_count;k++){
                    cout<<"\n\t\t Subsection  "<<k+1<<" : "<<nod->child[i]->child[j]->child[k]->label;
                }
            }
        }
    }else{
        cout<<"\nNo book data available.Please create a book first.";
    }
}
int main()
{
    int choice;
    booktree bt;
    
    while(true){
        cout<<"\n--------------------------------";
        cout<<"\n      Book Tree Menu         ";
        cout<<"\n----------------------------------";
        cout<<"\n1.Create Book";
        cout<<"\n2.Display Book";
        cout<<"\n3.Exit";
        cout<<"\nEnter your Choice : ";
        cin>>choice;
        switch(choice){
            case 1:
            bt.createtree();
            break;
            case 2:
            bt.display(bt.getroot());
            break;
            case 3:
            exit(0);
            break;
            default:
            cout<<"enter the proper choice";
        }
    }
    return 0;
}
