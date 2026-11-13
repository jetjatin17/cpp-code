#include<bits/stdc++.h>
using namespace std;
 
void read(string &a){
    cout<<"enter : ";
    getline(cin,a);
}

void print(string s){
    cout<<s;
}

void reverse(string s){
    int beg = 0;
    int end = s.size()-1;
    while(beg<end){
        swap(s[beg],s[end]);
        beg++;
        end--;
    }
    cout<<s;
    // reverse(s.begin(),s.end());                #include<algorithm>
}

void size(string s){
    int a = 0;
    while (s[a] != '\0'){
        a++;
    }
    cout<<"size = "<<a<<endl;
}

void check_palindrome(string s){
    int beg = 0;
    int end = s.size()-1;
    while(beg<end){
        if (s[beg]!=s[end]){
            cout<<"not a palindrome."<<endl;
            return;
        }
        beg++;
        end--;
    }
    cout<<"a palindrome"<<endl;
}

vector<int> hash_arr(string s){
    vector<int> hash(26,0);
    for (char ch:s){
        hash[ch - 'a']++;
    }
    return hash;
}

void largest(string &s){
    while (s[0] == '0'){
        s.erase(0,1);
    }
    int n = s.size()-1;
    for (int i = n;i>-1;i--){
        if ((int)s[i]%2){
            break;
        }
        s.pop_back();
    }
}

int main(){
    string s;
    read(s);
    // string s,a;
    // // cin>>a;
    // // cin.ignore();
    // getline(cin,s);
    // cout<<"s = ";
    // for (auto it:s){
    //     cout<<it;
    // } 
    // cout<<"\n";
    // a = s.substr(6,10);
    // a.erase(0,2);
    
    // cout<<"a = ";
    // for (char it:a){
    //     cout<<it;
    // }
    // if (s.find("paji") == string::npos){
    //     cout<<"\nstring not found.";
    // }

    // char ch = 'a';
    // char sh = ' ';
    // cout<<"word = "<<isalnum(ch)<<endl;
    // cout<<isalnum(sh)<<endl;
    // string s;
    // char ch = '';
    // cout<<(ch - 'a');
    
    // read(s);
    // print(s);
    // size(s);
    // check_palindrome(s);
    // reverse(s);
    
    // vector<int> hash = hash_arr(s);
    // for (int i=0;i<26;i++){
    //     cout<<i<<" = "<<hash[i]<<endl;
    // }
    
    // unordered_map<char,int> m;
    // for (char ch:s){
    //     m[ch]++;
    // }
    // for (auto it:m){
    //     cout<<"key = "<<it.first<<"  "<<"value = "<<it.second<<endl;
    // }
    // largest(s);
    // cout<<s<<endl;

    // cout<<endl<<isalnum(s[0])<<endl;

    for (int i=0;i<s.size();i++){
        if (isalnum(s[i])){
            if (isalpha(s[i]))
                s[i] = tolower(s[i]);
        }
        else{
            s.erase(i,1);
            i--;
        }
    }
    cout<<endl<<s<<endl;
    
    // tolower(s[0]);
    // cout<<endl<<s;

    return 0;
}



/*

NOTES : 

1. strings are dynamic memory allocation. allocation in heap (vector form).
2. for multiple words input use -> getline(cin,string_name);
3. for the size of the string use -> string_name.size();             js = 2      j,s
4. for length of the string use -> string_name.length();             js = 2      j,s
5. for concatination use ->  string s3 = s1+s2; or string s3 = s1.append(s2);
6. for append at end ->  s.push_back('p');                        for character only, ('char input');
7. for delete at end -> s.pop_back();
8. escape character(/) use for special symbol -> input = "ja is "good"" [error]
                                              -> input = "ja is /"good/"" [correct]
                                              this is because / tells the pc to not check next char.

*/