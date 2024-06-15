#include <iostream>
using namespace std;

void rotate(char s[]){
    int len = strlen(s);
    char temp[len];
    for(int i = 0; i < len; ++i){
        int j = i;
        int k = 0;
        while (s[j] != '\0' ){
            temp[k] = s[j];
            k++;
            j++;
        }
        j = 0;
        while (j < i){
            temp[k] = s[j];
            k++;
            j++;
        }
        cout<< temp<<endl;
    }

}



int main(){
    char s[] = "geeks";
    rotate(s);
    return 0;
}