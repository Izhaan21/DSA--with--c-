#include<iostream>
using namespace std;


void lastOCCLT(string&s , int i , char&x , int&ans ){
    //base case
    if(i>=s.size()){
        return; 
    }

    //1 case solution 

    if(s[i]==x){
        ans = i;
    }

    lastOCCLT(s,i+1,x,ans);
}

int main(){
string s;
cout<<"enter string"<<endl;
cin>>s;
int i = 0;
char x;
cout<<"enter char to get its index if exist"<<endl;
cin>>x;
int ans  = -1;
lastOCCLT(s,i,x,ans);
cout<<ans<<endl;
    return 0;
}