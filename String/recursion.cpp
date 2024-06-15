#include <iostream>
using namespace std;

void recursion(string &name,int i){
    if(i > name.length()-1-i){
        return;
    }
    swap(name[i],name[name.length()-1-i]);
    i++;
    recursion(name,i);
}
int main(){
    string name = "geeksforgeek";
    recursion(name,0);
    cout<<name<<endl;
    return 0;
}