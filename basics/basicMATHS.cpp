#include<bits/stdc++.h>
using namespace std;

// count the digits:
int countdigit(int n){
    int cnt=0;
    if (n==0)
        return 1;
    else
        cnt = (int)(log10(n)+1); // log base 10 of a number is (count-1).something something
    return cnt;                  // hence we use the int of the log base 10 of N and plus 1 to it
}

int reverseNumber(int n) {
        int rev = 0;
        while(n>0){
            int temp = n%10;
            rev = (rev*10)+temp;
            n/=10;            
        }
        return rev;
    }

bool isPalindrome(int n) {
    long long rev = 0;
    int t = n;
    if (n<0)
        return false;
    while(n>0){
        int temp = n%10;
        rev = (rev*10)+temp;
        n/=10;            
    }
    return t == rev;
} 

int largestDigit(int n) {
        int digit = 0;
        while(n>0){
            int temp = n%10;
            if (temp>digit)
                digit = temp;
            n/=10;
        }
        return digit;
    }

bool isArmstrong(int n) {
    int count = (n==0)?1:(int)log10(n)+1;
    int arm = 0;
    int constant = n; 
    while (n>0){
        int temp = n%10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= temp;
        }
        arm += power;
        n/=10; 
    }
    return constant==arm;
}

// vector<int> divisors(int n) {
//     vector <int> v;
//     for (int i=1;i*i<=n;i++){    // i*i<=n or i<=sqrt(n) second one is more time consuming
//         if (n%i==0){
//             v.push_back(i);
//             if (n/i!=i)
//                 v.push_back(n/i);
//         }
//     }
//     sort(v.begin(),v.end());
//     return v;
// }

bool isPrime(int n) {
    int prime=0;
    for (int i=1;i*i<=n;i++){
        if (n%i==0){
            prime +=1;
            if(n/i!=i)
                prime +=1;
        }
    }
    return (prime==2);
}

bool isPerfect(int n) {
    int sum=0;
    if (n==1)
        return false;
    for (int i=1;i*i<=n;i++){    
    if (n%i==0){
        sum+=i;
        if (n/i!=i && n/i!=n)
            sum+=(n/i);
    }
    }
    return (sum==n);
}

int GCD(int n1,int n2) {
    int high = 0;
    for (int i=1;i*i<=n1;i++){
        if (n1%i==0){
            if (i>high && n2%i==0)
                high=i;
            if (n1/i!=i && n2%(n1/i)==0)
                if ((n1/i)>high)
                    high=n1/i;                    
        }
    }
    return high;
}

int main(){
    int n,m;
    cout<<"enter the digit :";
    cin>>n;
    int count = countdigit(n);
    cout<<endl<<"count = "<<count<<endl;
    int reverse = reverseNumber(n);
    cout<<"reverse = "<<reverse<<endl;
    int pal = isPalindrome(n);
    cout<<"palindrome = "<<pal<<endl;
    int lar = largestDigit(n);
    cout<<"largest digit = "<<lar<<endl;
    cout<<"armstrong number = "<<isArmstrong(n)<<endl;
    // cout<<"divisors = "<<divisors(n)<<endl;
    cout<<"prime = "<<isPrime(n)<<endl;
    cout<<"perfect number = "<<isPerfect(n)<<endl;
    cout<<endl<<"enter another number : ";
    cin>>m;
    cout<<"\ngcd/hcf = "<<GCD(n,m)<<endl;
    return 0; 
}
