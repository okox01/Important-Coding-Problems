#include <bits/stdc++.h>
using namespace std;
int Binary_search(const vector<int>&arr,int target){
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            return mid; //if found return the index of mid
        }
        else if(arr[mid]<target){
            left=mid+1; //search in the right half
        }
        else{
            right=mid-1; //search in the left half
        }
    }
    return -1;  //if not found the index then return -1
}
int main(){
    int n;
    cin>>n;//number of elements
    vector<int>arr;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cin>>target;
    int index=Binary_search(arr,target);
    if(index==-1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"target found in index: "<<index<<endl;
    }
        return 0;
}