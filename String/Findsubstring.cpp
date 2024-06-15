#include <iostream>
using namespace std;

/*int main(){
    string str = "JoonYin,smart";
    int pos = str.find(',');
    string r = str.substr(0,4);
    string g = str.substr(0,pos);
    string c = str.substr(pos+1);
    cout<< r<<'\n'<<g<<'\n'<<c;

}*/

int main(){
    string str = "abcd";
    int n = str.length();
    for(int i = 0; i < n; i++){
        for(int j = 1; j<= n-i; j++){
            cout<< str.substr(i,j) << endl;
        }

    }

    return 0;
}