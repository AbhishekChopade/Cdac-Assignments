

//Given an array of n integers, find the second largest element and return if from function.
//int findSecondLargest(int nums[], int n);

#include<iostream>
using namespace std;

void readArrayElem(int arr[],int s);
int findSecondLargest(int nums[], int n);


int main()
{   
    int size = 5;
    int nums[size];
    readArrayElem(nums,size);
    int secMax = findSecondLargest(nums, size);
    cout<<"Second maximum number is "<<secMax<<endl;

}



void readArrayElem(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<"Enter the element = ";
        cin>>arr[i];
    }
}

int findSecondLargest(int arr[], int s){
    int max = arr[0];
    int smax;
    int maxind;
    smax = 0;
    for(int i=0;i<s;i++){
        if(arr[i]>max){
            max = arr[i];
            maxind = i;
        }
    }
    for(int i=0;i<s;i++){
        if(i!=maxind){
            if(arr[i]>smax || smax ==0)
                smax = arr[i];
        }
    }
    return smax;
}




