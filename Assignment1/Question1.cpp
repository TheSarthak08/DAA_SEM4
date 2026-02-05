#include <iostream>
using namespace std;
int binary_Search(int arr[],int key,int n){
    int s = 0;
    int e = n-1;
    int mid;
    while(s<=e){
        mid = (s + e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int key = 23;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<binary_Search(arr,key,n)<<endl;
    
}
