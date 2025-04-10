#include<iostream>
#include<vector>
using namespace std;

int findarray(vector<int>&arr, int size, int i)
{
    if(i==size-1)
    {
        return true;
    }
    
    if(arr[i+1]<arr[i])
    {
        return false;
    }


    int ans = findarray(arr, size, i+1);
    return ans;
}

int main()
{
    int size;
    cout<<"Enter the size of the array :" ;
    cin>>size;

    vector<int>arr(size);
    for(int i=0; i<arr.size(); i++)
    {
        cout<<"Enter the element of the array :";
        cin>>arr[i];
    }

    int i=0;

    int ans = findarray(arr,size,i);

    if(ans)
    {
        cout<<" Array is Shorted :";
    }else{
        cout<<" Array are not Sorted :";
    }


}