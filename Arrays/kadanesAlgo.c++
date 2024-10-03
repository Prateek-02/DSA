#include<iostream>
#include<climits>
using namespace std;

int maxSubArray(int arr[],int n){
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int arr[] = {1,3,-5,9,8,6};
    int n = 6;

    cout<<"Max sub Array sum is: "<<maxSubArray(arr,n);
}