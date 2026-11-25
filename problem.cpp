#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cout << "enter the string : ";
    cin>>s;
    cout << "enter the string : ";
    cin>>t;

    unordered_map<char,char> m = {{s[0],t[0]}};
        for (int i=1;i<s.size();i++){
            if (m.count(s[i])){
                if (m[s[i]] == t[i])
                    continue;
                else
                    cout<<"\nmistake\t"<<m[t[i]]<<endl;
            }
            m[s[i]] = t[i];
        }
        for (auto it:m){
            cout<<it.first<<"\t"<<it.second<<endl;
        };

    return 0;

}

