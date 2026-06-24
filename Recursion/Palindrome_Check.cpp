#include<iostream>
using namespace std;

bool checkPlaindrome(string&s , int i , int j){
    //base case
    if(i>=j){
        return true;
    }

    // 1 case solve
    if(s[i]!=s[j]){
        return false;
    }

    //RE

     return checkPlaindrome(s,i+1, j-1);
    
}

int main(){
string s;
cout<<"enter string"<<endl;
cin>>s;
int i= 0;
int j = s.length()-1;

if(checkPlaindrome(s,i,j)){
  cout<<"palindrome string"<<endl;  
}

else{
    cout<<"not palindrome";
}
return 0;

}