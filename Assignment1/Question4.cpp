#include <iostream>
#include<climits>
using namespace std;

int CrossSum(int arr[],int s,int e,int mid){
    int left_sum = INT_MIN;
    int lsum = 0;
    for(int i = mid;i>=s;i--){
        lsum = lsum + arr[i];
        if(lsum>left_sum){
            left_sum = lsum;
        }
    }
    int right_sum = INT_MIN;
    int rsum = 0;
    for(int i = mid+1;i<=e;i++){
        rsum = rsum + arr[i];
        if(rsum>right_sum){
            right_sum = rsum;
        }
    }
    return left_sum+right_sum;
}

int MaxSubArraySum(int arr[],int s,int e){
    if(s==e){
        return arr[s];
    }
    int mid = (s+e)/2;
    int left = MaxSubArraySum(arr,s,mid);
    int right = MaxSubArraySum(arr,mid+1,e);
    int cross = CrossSum(arr,s,e,mid);
    return max(left,max(right,cross));
}

int main(){
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    cout<<MaxSubArraySum(arr,0,7)<<endl;
}
