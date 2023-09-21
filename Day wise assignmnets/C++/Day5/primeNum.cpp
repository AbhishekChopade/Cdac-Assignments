// 2. Find prime numbers between two positive integers N and M, including N and M.
// For example:
// N = 3
// M = 10
// Prime Numbers = 3 5 7

#include<iostream>
using namespace std;
bool primeNum(int n);
int main(){
    int N,M;
    cout<<"Enter the number = ";
    cin>>N;
    bool pn = primeNum(N);
    if(pn == true)
        cout<<N<<" is a prime number";
    else
        cout<<N<<" is not a prime number";
}
bool primeNum(int n){
        bool flag=true;
        if(n==1){
            flag = false;
            return flag;
        }

        for(int i=1;i<n;i++){
            if(i==1)
                continue;
            if(n%i == 0){
                flag = false;
                break;
            }
        }
        return flag;

}
        
    
