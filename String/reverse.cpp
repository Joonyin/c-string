#include <iostream>
#include <cstring>
using namespace std;

void reverse(char s[]){
    int i = 0;
    char temp;
    for(int j = strlen(s)-1; j >= 0; j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
    }
}



int main(){
    char s[] = "abc";
    reverse(s);
    cout << s ;
    return 0;
}