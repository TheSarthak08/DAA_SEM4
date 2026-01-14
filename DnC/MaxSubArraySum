#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int max_cross_sum(int arr[],int p,int mid,int r){
    int left_sum = INT_MIN;
    int lsum = 0;
    for(int i = mid;i>=0;i--){
        lsum = lsum + arr[i];
        if(lsum>left_sum){
            left_sum = lsum;
        }
    }
    int right_sum = INT_MIN;
    int rsum = 0;
    for(int i = mid+1;i<=r;i++){
        rsum = rsum + arr[i];
        if(rsum>right_sum){
            right_sum = rsum;
        }
    }
    return left_sum + right_sum;
}

int maxsubsum(int arr[],int p , int r){
    if(p==r){
        return arr[p];
    }
    int mid = (p+r)/2;
    int leftsum = maxsubsum(arr,p,mid);
    int rightsum = maxsubsum(arr,mid+1,r);
    int crosssum = max_cross_sum(arr,p,mid,r);
    return max(max(leftsum,rightsum),crosssum);
}



int main(){
    int arr[] = {1,-1,3,4,5,6,-10};
    int x = maxsubsum(arr,0,6);
    cout<<x;
}
