#include <iostream>
#include <string>
#include <numeric>
using namespace std;

bool binary_string(char s[], int n ){
    for(int i = 0; i < n; i++){
        if(s[i] != 1 && s[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    char s[] = {0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    int n = sizeof(s)/sizeof(s[0]);
    bool check = binary_string(s,n);
    if(!check){
        cout << "NO, it is not a binary string";
    }
    else if(check){ 
        cout<< "Yes it is a binary string";
    }
    return 0;
}