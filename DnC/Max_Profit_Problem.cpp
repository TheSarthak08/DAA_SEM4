#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int max_cross_profit(int arr[],int s,int mid,int e){
    int min = INT_MAX;
    for(int i = mid;i>=s;i--){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    int max = INT_MIN;
    for(int i = mid+1;i<=e;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max-min;
}

int maxprofit(int arr[],int s , int e){
    if(s==e){
        return 0;
    }
    int mid = (s+e)/2;
    int leftprofit = maxprofit(arr,s,mid);
    int rightprofit = maxprofit(arr,mid+1,e);
    int cross_profit = max_cross_profit(arr,s,mid,e);
    return max(max(leftprofit,rightprofit),cross_profit);
}



int main(){
    int arr[] = {1,5,3,2};
    int x = maxprofit(arr,0,3);
    cout<<x;
}
