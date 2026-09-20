#include<bits/stdc++.h>
using namespace std;

void initialise_declaration() {
    pair<int,int> p = {2,3};
    cout << p.first << "\t" << p.second << endl;

    pair<int,int> q;
    q.first = 10;
    q.second = 22;
    cout << q.first << "\t" << q.second << endl;  
    
    pair<int,string> c = {10,"Ten"};
    cout << c.first << "\t" << c.second << endl;
    
    pair<int,int> mp = make_pair(2,4);
    // this makes the pair like normal without using the curly brackets and can be used normally.
    
    auto ap = make_pair(2,3);
    // using this the auto command automatically guess which data types are used and we 
    // don't have to assign the data types. this can be used normally.
}

void nested_pairs(){
    pair<int,pair<string,float>> price = {101,{"apple",230.05}};
    cout << price.first << "\t" << price.second.first << "--" << price.second.second << endl;
}

void array_pairs(){
    pair<char,int> arr[3] = {{'a',10},{'b',11},{'c',12}};
    cout << arr[0].first << " -- " << arr[0].second << endl;
}


// function pairs that return values in pairs.
pair<int,int> calci(int a,int b){
    return {a+b,a*b};
}


int main(){
    // initialise_declaration();
    // nested_pairs();
    // array_pairs();
    auto c = calci(10,2);
    cout << c.first << "\t" << c.second << endl;
    return 0;
}