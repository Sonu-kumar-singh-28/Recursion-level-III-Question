#include<iostream>
#include<vector>
using namespace std;

int findbinarysearch(vector<int>& arr, int size, int target, int start , int end)
{
    int mid = start+(end-start)/2;

    if(start>end)
    {
        return -1;
    }

    if(arr[mid] == target)
    {
        return mid;
    }

    if(arr[mid]<target)
    {
        return findbinarysearch(arr,size, target, mid+1, end);
    }
    else{
        return findbinarysearch(arr,size, target, mid-1, start);
    }

}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    vector<int>arr(size);

    for(int i=0; i<arr.size(); i++)
    {
        cout<<"Enter the element of the array ";
        cin>>arr[i];
    }
    int target;
    cout<< " Enter the Target you find  : ";
    cin>>target;
    
    
    int start=0;
    int end = size-1; 
    int binarysearch = findbinarysearch(arr,size, target,start, end);
    cout<< " The ans Found at : " << binarysearch  << " Index"<< endl;
}







