// 1. Given a positive integer N, find its reverse.
// For example:
// N = 534
// Reverse = 435
// N = 5
// Reverse = 5

#include<iostream>
using namespace std;
int reverseNum(int n);
int main(){
    int N;
    cout<<"Enter a number = ";
    cin>>N;
    int rev = reverseNum(N);
    cout<<"Reversed number = "<<rev;

}

int reverseNum(int n){
    int rem;
    int r = 0;
    while(n>0){
        rem = n % 10;
        r = r*10 + rem;
        n = n/10;
    }
    return r;


}