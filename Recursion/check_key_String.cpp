#include<iostream>
#include<string>
using namespace std;

bool checkKey(string str , int n , int i , char key){
    if(i>=n){
        return false;
    }
    
    if(str[i]==key){
        return true;
    }

  bool ans  =  checkKey(str , n , i+1 , key);
    return ans;
}

int main(){
string str = "izhaan";
int n = str.length();
char key = 'z';
int i = 0;
if(checkKey(str,n,i,key)){
    cout<<"true"<<endl;
}

else{
    cout<<"false"<<endl;
}

return 0;

}