#include <iostream>
#include <string>
using namespace std;

void printsubstring(string s){
    for(int i = 0; i < s.length(); ++i){
        cout<< s[i] << ", ";
    }
    string len2 = "";
    for(int i = 0; i < s.length(); ++i){
        for(int j = i+1; j < s.length(); ++j){
            len2 = s[i] + s[j];
            cout<< endl << len2;
        }
        if(i = s.length()-2){
            break;
        }
    }
    for(int i = 0; i < s.length(); ++i){
        for(int j = 1; j <= s.length(); ++j)
    }
    
}



int main(){
    string s = "geeks";
    return 0;
}