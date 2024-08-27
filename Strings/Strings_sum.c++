#include<iostream>
using namespace std;

string stringSum(string &num1, string &num2){
    int i = num1.length()-1;
    int j = num2.length()-1;

    int carry = 0;
    string res = "";

    while(i>=0 || j>= 0 || carry > 0){
        int d1 =(i>=0) ? num1[i--] - '0' : 0;
        int d2 =(j>=0) ? num2[j--] - '0' : 0;

        int sum = d1+d2+carry;
        carry = sum/10;

        res = to_string(sum%10) + res;
    }
    return res;
}

int main(){
    
    string num1,num2;
    cout<<"Enter First String: ";
    cin>>num1;
    cout<<"Enter Second String: ";
    cin>>num2;
    cout<<"Sum of strings is: "<<stringSum(num1,num2);



    return 0;
}