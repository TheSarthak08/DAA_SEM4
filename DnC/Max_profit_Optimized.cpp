#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int max_profit(int arr[],int size){
    int min_element = INT_MAX;
    int maxprofit = 0;
    for(int i = 0;i<size;i++){
        min_element = min(min_element,arr[i]);
        maxprofit = max(maxprofit,arr[i]-min_element);
    }
    return maxprofit;
}



int main(){
    int arr[] = {1,5,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = max_profit(arr,n);
    cout
