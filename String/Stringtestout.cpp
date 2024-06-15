#include <iostream>
using namespace std;

int main(){
    string str = "JoonYin is handsome";
    string str2 = ", which is true";
    string str3;

    str.append(str2);

    cout << str <<'\n';

    char str5[]= "JoonYin is handsome";
    char str4[] = ", which is true";

    strcat(str5, str4);

    cout << str5 <<'\n';

    int i = 0;
    int len1 = str.length();
    int len2 = str2.length();


    while(i < len1-1){
        str3[i] = str[i];
        i++;
    }
    int j = 0;

    while(i < len1 + len2 -2 ){
        str3[i] = str2[j];
        i++;
        j++;
    }



    cout<< str3;


    return 0;

}   