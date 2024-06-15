#include <iostream>
using namespace std;

void remove_c(char* str, int n,char c){
    
    int index = 0;
    for(int i = 0; i < n; i++){
        if(str[i] != c){
            str[index] = str[i];
            
            index++;

        }
    }
    
}

int main(){
    char str[] = "geeksforgeeks";
    int n = sizeof(str)/sizeof(str[0]);
    char c = 'e';
    remove_c(str,n,c);
    cout << str ;

    return 0;
}