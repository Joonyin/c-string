#include <iostream>
#include <map>

using namespace std;

string removeduplicate(string str,int n){
    unordered_map<char, int> exists;
    string ans = "";
    for(int i = 0; i < n; ++i){
        if(exists.find(str[i]) == exists.end()){
            ans.push_back(str[i]);
            exists[str[i]]++;
        }
    }
    return ans;
}

int main(){
    string str = "geeksforgeeks";
    int n = str.size();
    cout<<removeduplicate(str,n);
    return 0;
}