#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int toDigit(char ch){
    return (ch - '0');
}

int sum_substring(string num){
    vector<int> v;
    int n = num.length();
    for(int i = 0; i < n; i++){
        for(int j = 1; j<= n-i; j++){
            string sub = num.substr(i,j);
            int x = stoi(sub);
            v.push_back(x);
        }
    }
    int res = accumulate(v.begin(), v.end(),0);
    return res;
}

int main(){
    string num = "1234";
    cout<< sum_substring(num) <<endl;
    return 0;
}