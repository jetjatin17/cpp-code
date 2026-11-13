#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> s = {"dog" , "cat" , "animal", "monkey"};
    int n = s[0].size();
        for (int i=0;i<s.size()-1;i++){
            int a=0;
            for (int j=0;j<n;j++){
                
                if (s[i][j] == s[i+1][j]){
                    a++;
                    continue;
                }
                break;
            }n=a;
        }
        if (n==0){
            cout<<"\nempty\n";
        }
        else{
            cout<<s[0].substr(0,n);
        }
}