// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;

//     return 0;
// }



// for n = 4
// 1234
// 1234
// 1234
// 1234

#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;

//     for (int i = 1; i<=n; i++){
//         for (int j = 1;j<=n; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
    
//     for (int i = 1; i<=n; i++){
//         for (char j = 65; j<(n+65); j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// for n = 3.
// 123
// 456
// 789           the numbers continue.

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;

//     for (int i = 1; i<=n; i++){
//         int k = 1+((i-1)*n);
//         for (int j = k; j < (k+n); j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     int num = 1;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// triangle pattern for n = 3.
// *
// **
// ***

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i = 1; i<=n; i++){
//         for (int j = 0; j<i; j++){
//             cout << "* ";
//         }cout << endl;
//     }    
//     return 0;
// }



// 1
// 22
// 333
// 4444

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i = 1; i<=n; i++){
//         for (int j = 0; j<i; j++){
//             cout << i << " ";
//         }cout << endl;
//     }   
//     return 0;
// }



// A                    A
// BB                   BC
// CCC                  DEF
// DDDD                 GHIJ

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i<=n; i++){
//         for (int j=0; j<i; j++){
//             cout << ch << " ";
//             ch+=1;
//         }cout << endl;
//     }  
//     return 0;
// }



// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i<=n; i++){
//         for (int j=0; j<i; j++){
//             cout << ch << " ";
//         }cout << endl;
//         ch+=1;
//     }  
//     return 0;
// }




// reverse number triangle for n = 3.
// 1
// 21
// 321

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i =1; i<=n;i++){
//         for (int j = i; j >=1;j--){
//             cout << j << " ";
//         }cout << endl;
//     }    
//     return 0;
// }




// inverse triangle for n = 4.
// 1111
//  222
//   33
//    4

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i = 0; i<n; i++){
//         for (int k = 0; k<i; k++){
//             cout << " "; 
//         }
//         for (int j = 0; j<(n-i) ; j++){
//             cout << (i+1);
//         }cout << endl;
//     }
//     return 0;
// }




// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     char ch = 'A';
//     for (int i = 0; i<n; i++){
//         for (int k = 0; k<i; k++){
//             cout << " "; 
//         }
//         for (int j = 0; j<(n-i) ; j++){
//             cout << ch;
//         }cout << endl;
//         ch+=1;
//     }
//     return 0;
// }



// pyramid  pattern for n = 3.

//     1
//    121
//   12321  

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i = 1; i<=n; i++){
//         for (int j = 1; j<=(n-i); j++){
//             cout << " ";
//         }
//         for (int j=0; j<i; j++){
//             cout << (j+1);
//         }
//         for (int j = i-1; j>0; j--){
//             cout << j;
//         }cout << endl;
//     }
//     return 0;
// }




// hollow diamond pattern for  n = 4.

//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i=1; i<=n; i++){
//         for (int j=0; j<(n-i); j++){
//             cout << " ";
//         }cout << "*";
//         if (i!=1){
//             for (int j=1; j<=(((i-1)*2)-1); j++){
//                 cout << " ";
//             }cout << "*";
//         }cout << endl;
//     }
//     for (int i=1;i<n;i++){
//         for (int j=0; j<i; j++){
//             cout << " ";
//         }cout << "*";
//         if (i!=(n-1)){
//             for (int j=(((n-(i+1))*2)-1); j>0; j--){
//                 cout << " ";
//             }cout << "*";
//         }cout << endl;
//     }
//     return 0;
// }



// pattern for 

// int main(){
//     int a,b,c=10;
//     for (a=0;a<c;a++){
//         cout << a;
//         cout << "\t" << c-a << endl;
//     }
//     return 0;
// }



// int main(){
//     int a,sum=0;
//     for (a=0;a<10;a++){
//         sum+=a*2;
//         cout << sum << endl;
//     }
//     return 0;
// }


int main(){
    int i,n;
    cout << "enter the number : ";
    cin >> n;
    for (i=0;i<=n;i++){
        cout << i << endl;
    }
    cout << "this is done" << endl;
    return 0;
}