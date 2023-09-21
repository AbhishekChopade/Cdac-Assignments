#include<iostream>
using namespace std;

void swap(int N,int M);
int main()
{
    int N,M;
    cout<<"Enter the Two Numbers=";
    cin>>N>>M;
    cout<<"Before Swap "<<"N = "<<N<<" "<<"M = "<<M<<endl; 
    swap(N,M);
}

void swap(int N,int M)
{
    int temp;
    temp=M;
    M=N;
    N=temp;
    cout<<"After Swap "<<"N = "<<N<<" "<<"M = "<<M<<endl; 
    
}