#include <iostream>
using namespace std;

int find_pos_last_char(string str,char x){
    int index = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == x){
            index = i;
        }
    }
    return index;
}
int main(){
    string str= "geeksforgeeks";
    char x = 'e';
    int r = find_pos_last_char(str,x);
    cout << r;

    return 0;
}