//Vector Function

#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> vec={112,342,12,43,54,21,54,32,54,3};
    
    cout<<endl<<vec.size()<<endl;; //Size of vector
    vec.push_back(1200); // insert the element at end in vector
    vec.push_back(1230);
    vec.pop_back(); //remove the value present at last in vector
    cout<<(vec.front())<<endl; //returns front value
    cout<<vec.back()<<endl; //returns last value
    cout<<vec.size()<<endl;
    cout<<vec.at(4)<<endl; //returns the value at the index 4
    return 0;
}
