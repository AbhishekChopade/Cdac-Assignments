// 5. In the given string, convert all upper case chanracters to lower case.
// void ToLower(char s[]);


#include<iostream>
using namespace std;

void ToLower(char s[]){
    int i = 0;
    while(s[i]!='\0'){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i] = s[i]+32;
        }
        i++;
    }
     cout<<"Lower Case = "<<s<<endl;

}

int main(){
    char str[] = "HELLO";
    cout<<"Upper Case = "<<str<<endl;
    ToLower(str);

}