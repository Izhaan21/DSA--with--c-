#include<iostream>
#include<string>
#include<vector>
using namespace std;
void checkKey(string str , int n , int i , char&key , vector<int>&ans){
    if(i>=n){
        return;
    }
    
    if(str[i]==key){
        ans.push_back(i);
    }

    checkKey(str , n , i+1 , key , ans);
   
}

int main(){
string str = "izhaan";
vector<int>ans;
int n = str.length();
char key = 'z';
int i = 0;
 checkKey(str , n ,i, key , ans);

for(auto val : ans){
    cout<<val<<" ";
}
cout<<endl;
return 0;

}