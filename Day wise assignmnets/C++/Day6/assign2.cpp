#include<iostream>
using namespace std;
int area(int S);
int area(int L,int B);

int main()
{
    int s;
    int l,b;
    cout<<"Enter side of a square = ";
    cin>>s;
    cout<<"Enter two sides of a rectangle = ";
    cin>>l>>b;
    area(s);
    area(l,b);
    

}

int area(int S)
{
   int sqr= S * S;
   cout<<"area of square = "<<sqr<<endl;
}

int area(int L,int B)
{
    int rec= L * B;
    cout<<"area of Rectangle = "<<rec<<endl;
}