#include<iostream>
using namespace std;

// Sum of all subArrays

/*
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[100];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    cout<<"Sum of each subarray: "<<endl;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}
*/

// Longest Arithmetic SubArray

/*
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = 2;
    int pd = arr[1] - arr[0];
    int i=2; 
    int currLen = 2;

    while(i<n){
        if(pd == arr[i]-arr[i-1]){
            currLen++;
        }
        else{
            pd = arr[i] - arr[i-1];
            currLen = 2;
        }
        ans = max(ans,currLen);
        i++;
    }
    cout<<ans<<endl;
}
*/


// Record Breaker

int main(){
    int n;
    cout<<"Enter no. of days: ";
    cin>>n;

    int arr[100];
    cout<<"Enter no. of people in each day: "<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    
    int ans = 0;
    int mx = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > mx && arr[i] > arr[i+1]) {
            ans++;
        }
        mx = max(mx,arr[i]);
    }
    cout<<ans<<endl;  
}