#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool check_palindrone(string& s, int n){
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    string str1 = "abba";
    string str2 = "GeeksforGeeks";
    
    bool check_str1 = check_palindrone(str1,str1.length());
    bool check_str2 = check_palindrone(str2,str2.length());

    if(check_str1){
        cout<< "It is palindrone\n";
    }
    else{
        cout<< "it is not palindrone\n";
    }
    if(check_str2){
        cout<< "It is palindrone\n";
    }
    else{
        cout<< "it is not palindrone\n";
    }




    return 0;
}