#include<iostream>
#include<string>
using namespace std;


bool isPalindrome(string s) {
    string c;
    for (int i=0;i<s.size();i++){
        if ((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
            c+=tolower(s[i]);
        }
    }
    for (int i = 0; i < c.size(); i++) {
        cout << c[i]<<endl;
    }
    cout<<c.size()<<endl;
    for (int j=0;j<c.size()/2;j++){
        if (c[j]!=c[c.size()-1-j])
            return false;
    }
    return true;
}


int main(){
    string s = "A man, a plan, a canal: Panama";
    cout<<isPalindrome(s)<<endl;
    return 0;
}