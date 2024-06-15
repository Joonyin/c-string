#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int toDigit(char ch){
    return (ch - '0');
}

void max_substring(string num){
    vector<int> v;
    int n = num.length();
    for(int i = 0; i < n; i++){
        for(int j = 1; j<= n-i; j++){
            string sub = num.substr(i,j);
            int x = stoi(sub);
            v.push_back(x);
        }
    }
    cout<<*max_element(v.begin(),v.end());
    
}

int main(){
    string num = "1234";
    max_substring(num);

    return 0;
}