#include<iostream>
#include<string>
using namespace std;

// int main()
// {
//     int age;
//     int c = 12;
//     age = 18;
//     float n = 32.33;
//     bool name = -45;
//     // cout <<"...first code...\npaper"<<"...first code...\npaper"<< endl;
//     cout << age << endl;
//     cout << n << endl;
//     cout << c << endl;
//     cout << name << endl;
//     return 0;
// }


// program to check if a input is a uppercase or a lowercase.

// int main()
// {
//     char val;
//     cout << "enter the value : ";
//     cin >> val; 
//     if (val >=65 && val <= 91){
//         cout << "input is uppercase.";
//     }else if (val >= 92 && val <= 117){
//         cout << "input is a lowercase.";
//     } else {
//         cout << "invalid input.";
//     }
//     return 0;
// }


// different method for the same question. 

// int main()
// {
//     char input;
//     cout << "enter the value : "; 
//     cin >> input;
//     if (input >='A' && input <= 'Z'){
//         cout << "input is uppercase.";
//     }else if (input >= 'a' && input <= 'z'){
//         cout << "input is a lowercase.";
//     } else {
//         cout << "invalid input. not an alphabet";
//     }
//     return 0;
// }




// ternary operators. 

// int main()
// {
//     int grade;
//     cout << "enter your grade : ";
//     cin >> grade;
//     grade >= 90 ? cout << "s grade" : cout << "pass";
//     return 0;
// }



// while loop.

// int main()
// {
//     int num = 1;
//     while (num<6){
//         cout << num;
//         cout << ". this is line break\n";
//         ++num;
//     }
//     return 0;
// }



// star pattern.

// int main(){
//     int n=1,m;
//     while (n<=5){
//         m=1;
//         while(m<=n){
//             cout << m;
//             m++;
//         }
//         cout << endl;
//         n++;
//     }
//     cout << "changed this again"; 
//     return 0;
// }



// string as an input.

// int main(){
//     string name;                                   // here we don't use char as it take only 1 input.
//     cout << "enter your name : ";
//     cin >> name;
//     cout << name << " is a very great man." << endl;
//     return 0;
// }



// for loop in c++.

// int main(){
//     int n,i,sum = 0;
//     cout << "enter the number : ";
//     cin >> n;
//     for (i = 1; i <= n; i++){
//         if (!(i%2 == 0)){
//             sum = sum + i;            
//         }
//     }cout << sum;
//     return 0;
// }



// prime check.

// int main(){
//     int n,i = 0,prime = 1;
//     cout << "enter the number : ";
//     cin >> n;
//     for (i = 2;i <=(n/2); i++){
//         if (n%i == 0){
//             prime = 0;
//             break;
//         }
//     }if (prime == 1){
//         cout << "number is a prime number." << endl;
//     }else {
//         cout << "number is not prime." << endl;
//     }
//     return 0;
// }



// square stars  on n input.

// int main(){
//     int n,i,j;
//     cout << "enter the square side value : ";
//     cin >> n;
//     for (i=1; i<=n; i++){
//         for (j=1; j<=n; j++){
//             cout << "*\t";
//         }cout << endl;
//     }
//     return 0;
// }



// factors a number "n".

// int main(){
//     int n;
//     string s = " ";
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i = 1; i <=n; i++){
//         if (n%i == 0){
//             s += to_string(i) + "  ";
//         }
//     }
//     cout << "the factorials are :" << s << endl;
//     return 0;
// }




// factorial n.

// int main(){
//     int n,factorial = 1;
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i = 1; i<=n; i++){
//         factorial = factorial * i;
//     }
//     cout << "factorial is = " << factorial << endl;
//     return 0;
// }