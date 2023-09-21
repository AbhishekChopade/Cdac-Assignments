// Copy the source string "src" into destination string "dest".
// void StrCpy(char dest[], char src[]);
#include<iostream>
using namespace std ;
void StrCpy(char dest[], char src[]);

int main()
{
   char src[]="Hello world";
   char dest[20];
    cout<<"Source = "<<src<<endl;

   StrCpy(dest,src);
}

void StrCpy(char dest[], char src[])
{
    dest=src;
    cout<<"destination = " <<dest;

}
