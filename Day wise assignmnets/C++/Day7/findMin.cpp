//Given an array of n integers, find the smallest element and return if from function.
//int findMin(int nums[], int n);

#include<iostream>
using namespace std;

void readArrayElem(int arr[],int s);
int findMin(int nums[], int n);


int main()
{   
    int size = 5;
    int nums[size];
    readArrayElem(nums,size);
    int minNum = findMin(nums, size);
    cout<<"Minimum number is "<<minNum<<endl;

}



void readArrayElem(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<"Enter the element = ";
        cin>>arr[i];
    }
}

int findMin(int arr[], int s){
    int min;
    min = arr[0];
    for(int i=0;i<s;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}




