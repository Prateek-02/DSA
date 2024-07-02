#include<iostream>
using namespace std;

// check plaindrom

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrom(char name[],int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(toLowerCase(name[s]) != toLowerCase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

// reverse string

void reverse(char name[],int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}



// get length of string
int getLength(char name[]){
    int count = 0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}


int main(){
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;
    // name[2] = '\0';   // terminat after seeing null character

    cout<<"Your name is: ";
    cout<<name<<endl;

    int res = getLength(name);
    cout<<"Length of string: "<<res<<endl;

    reverse(name,res);
    cout<<"Your name after reversing: "<<name<<endl;

    bool ans = checkPalindrom(name,res);
    cout<<"Is palindrom: "<<ans<<endl;

    cout<<"Character is: "<<toLowerCase('b')<<endl;
    cout<<"Character is: "<<toLowerCase('C')<<endl;
    
}