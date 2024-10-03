#include<iostream>
#include<vector>
using namespace std;


// Optimal Approach --> O(n)
vector<int> pairSum(vector<int> nums,int target){
    vector<int> ans;

    int n = nums.size();

    int i=0,j=n-1;

    while(i<j){
        int pairSum = nums[i] + nums[j];

        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;

    vector<int> ans  = pairSum(nums,target);
    cout<<ans[0] <<", "<<ans[1]<<endl;

    return 0;
}


// Brute Force --> O(n^2)
/*
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    int s;
    cout<<"Enter sum value: ";
    cin>>s;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Pairs with sum value: "<<endl;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j] == s){
                cout<< arr[i] << " " << arr[j] << endl;
            }
        }
    }
}
*/