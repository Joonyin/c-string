#include <iostream>
using namespace std;

char *removechar(char x[], int n){
    int index = 0;
    for(int i =0; i < n; i++){
        int j;
        for(j = 0; j < i; j++){
            if(x[i]==x[j]){
                break;
            }
        }
        if(i == j){
            x[index++] = x[i];
        }
    }
    return x;
}



int main(){
    char x[] = "geeksforgeeks";
    int n = sizeof(x)/sizeof(x[0]);
    
    cout<< removechar(x,n);
    return 0;
}
