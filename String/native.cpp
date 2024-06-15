#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void search(char* tex, char* pat);

int main(){

    char tex[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";

    search(tex,pat);

    return 0;
}
void search(char* tex, char* pat){
    int m = strlen(tex);
    int n = strlen(pat);
    for(int i = 0; i < m-n; i++){
        int j;
        for(j = 0; j < n; j++){
            if(tex[i+j]!=pat[j]){
                break;
            }
        }
        if(j == n){
            cout << "The substring was found at "<< i << "index.\n";
        }
    }
}