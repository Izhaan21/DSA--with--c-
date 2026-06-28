#include<iostream>
using namespace std;

void reverse(string&s , int i , int j){
    //base case

    if(i>=j){
        return;
    }

    //1 case solve

    swap(s[i],s[j]);

    //RE

    reverse(s,i+1,j-1); 
}

int main(){
  string s;
  cout<<"enter string"<<endl;
  cin>>s;
  int i=0;
  int j = s.size()-1;
reverse(s,i,j);

    cout << "Reversed string: " << s << endl;
  return 0;
}