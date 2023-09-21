//Given an array of n integers, find the largest element and return if from function.int findMax(int nums[], int n);
#include<iostream>
using namespace std;

int getValidCount(int MAX_SIZE);
void readArrayElem(int nums[],int n);
int findMax(int nums[], int n);


int main()
{   
    const int MAX_SIZE = 100;
    int nums[MAX_SIZE];
    int size = getValidCount(MAX_SIZE);
    readArrayElem(nums,size);
    int maxNum = findMax(nums, size);
    cout<<"Maximum number is "<<maxNum<<endl;

}

int getValidCount(int mn)
{
    do{
        cout<<"Enter size of an array (<=100) = ";
        cin>>mn;
    }while(mn>100 || mn<=0);
    return mn;
}

void readArrayElem(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<"Enter the element = ";
        cin>>arr[i];
    }
}

int findMax(int arr[], int s){
    int max;
    max = arr[0];
    for(int i=0;i<s;i++){
        if(arr[i]>max){ //min<arr[i]
            max = arr[i];
        }
    }
    return max;
}




