#include<iostream>
using namespace std;
int reverse(int N);

int main()
{
    int N;
    cout<<"Enter the Number =";
    cin>>N;
    int a=reverse(N);
    if (a==N)
    {
        cout<<N<<" is Palindrome Number"<<endl;
    }     
    else
        cout<<N<< " is not a Palindrome Number";
}

int reverse(int N)
{

    int r,revn=0;
    while(N>0)
    {
        r=N%10;
        N=N/10;
        revn=(revn*10)+r;
    }
    return revn;
}