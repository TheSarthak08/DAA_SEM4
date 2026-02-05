#include <iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int s,int e){
    int pivot = arr[e];
    int i = s-1;
    for(int j = s;j<=e;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[e],arr[i+1]);
    return i+1;
}

void quicksort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
    return;
}

int main(){
    vector<int> arr = { 4, 2, 6, 9, 2 };
    quicksort(arr,0,4);
    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
