
//Given an array of n integers, find the second largest element and return if from function.
//int findSecondSmallest(int nums[], int n);

#include<iostream>
using namespace std;

void readArrayEle(int nums[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the array elements=";
        cin>>nums[i];
    }
}
int findSecondSmallest(int nums[],int n)
{
    int min=nums[0];
    int minInd;
    for (int i=0;i<n;i++)
    {
        if(nums[i]< min)
        {
            min=nums[i];
            minInd=i;
        }
    }
     
     int secMin=0;

     for(int i=0;i<n;i++)
     {
        if(minInd!=i)
        {
            if(nums[i]<secMin || secMin == 0)
            {
                secMin=nums[i];
            }
        }
     }
     return secMin;
}

int main()
{
    int size=5;
    int nums[size];
    readArrayEle(nums,size);
    int SecMin=findSecondSmallest(nums,size);
    cout<<"Second Minimum = "<<SecMin;

}