#include<iostream>

using namespace std;
struct node{
    string label;
    int child_count;
    node* child[10];
};

class book{
    private:
    node* root;
    public:
    book(){
        root=nullptr;
        
    }
    void createbook();
    void display(node* nod);
    node* getroot(){
        return root;
    }
};

void book::createbook(){
    int totalchapter;
    root=new node();
    cout<<"\nEnter the name of book : ";
    cin>>root->label;
    cout<<"\nEnter the number of chapters present in the book : ";
    cin>>totalchapter;
    root->child_count=totalchapter;
    
    for(int i=0;i<totalchapter;i++){
        root->child[i]=new node();
        cout<<"\nEnter the name of chapters in the book "<<root->label<<":";
        cin>>root->child[i]->label;
        cout<<"\nEnter the number of section present in the chapter "<<root->child[i]<<": ";
        cin>>root->child[i]->child_count;
        for(int j=0;j<root->child[i]->child_count;j++){
            root->child[i]->child[j]=new node();
            cout<<"\nEnter the name of section present in the chapter "<<root->child[i]<<": ";
            cin>>root->child[i]->child[j]->label;
            cout<<"\nEnter the number of subsections present in the section "<<root->child[i]->child[j]->label<<" : ";
            cin>>root->child[i]->child[j]->child_count;
            for(int k=0;k<root->child[i]->child[j]->child_count;k++){
                root->child[i]->child[j]->child[k]=new node();
                cout<<"\nEnter the name of subsection present in the section "<<root->child[i]->child[j]->label<<" : ";
                cin>>root->child[i]->child[j]->child[k]->label;
                
            }
        }
    }
}

void book::display(node* nod){
    if(nod==nullptr){
        cout<<"\nEmpty";
        return;
    }
    cout<<"\n\nBook Hierarchy ---\n";
    cout<<"\nName of Book : "<<root->label<<endl;
    for(int i=0;i<root->child_count;i++){
        cout<<endl;
        cout<<"Chapter "<<i+1<<" : "<<root->child[i]->label;
        for(int j=0;j<root->child[i]->child_count;j++){
            cout<<endl;
            cout<<"Section"<<j+1<<root->child[i]->child[j]->label;
            for(int k=0;k<root->child[i]->child[j]->child_count;k++){
                cout<<endl;
                cout<<"Subsection"<<k+1<<root->child[i]->child[j]->child[k]->label;
            }
            
        }
    }
}
int main(){
    book b;
    int ch=0;
    while(ch!=3){
        cout<<"\n\nMenu";
        cout<<"\n1.createbook";
        cout<<"\n2.display";
        cout<<"\nExit";
        cout<<"\nEnter your choice :";
        cin>>ch;
        
        switch(ch){
            case 1:
            b.createbook();
            break;
            case 2:
            b.display(b.getroot());
            break;
            case 3:
            exit(0);
            break;
            default:
            cout<<"Enter the proper choice ";
        }
    }
}
