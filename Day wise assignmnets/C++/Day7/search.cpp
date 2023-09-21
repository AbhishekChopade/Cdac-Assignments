//bool search(int nums[],int n, int element)

#include<iostream>
using namespace std;

void readArrayElem(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<"Enter the element = ";
        cin>>arr[i];
    }
}
bool search(int nums[],int n, int element){
    for(int i=0;i<n;i++){
        if(element == nums[i])
            return true;
    }
    return false;

}

int main(){
    int size = 5;
    int nums[size];
    readArrayElem(nums,size);
    int elem;
    cout<<"Enter the element to search = ";
    cin>>elem;
    bool flag = search(nums,size,elem);
    if(flag == true)
        cout<<elem<<" is present in an array"<<endl;
    else
        cout<<elem<<" is not present in an array"<<endl;

}