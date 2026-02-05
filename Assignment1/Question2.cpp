#include <iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int s,int e){
    int i = s;
    int m = (s+e)/2;
    int j = m+1;
    vector<int>temp;
    while(i<=m&&j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else if(arr[i]>arr[j]){
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=m){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }
    int k = 0;
    for(int i = s;i<=e;i++){
        arr[i] = temp[k++];
    }
    return;
}

void MergeSort(vector<int> &arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    merge(arr,s,e);
    return;
}

int main(){
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    vector<int> arr2 = {38, 27, 43,3, 9, 82, 10};
    MergeSort(arr,0,5);
    MergeSort(arr2,0,6);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<7;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}
