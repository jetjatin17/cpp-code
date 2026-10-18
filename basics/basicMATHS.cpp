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

int main(){
    int n;
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
    return 0; 
}
