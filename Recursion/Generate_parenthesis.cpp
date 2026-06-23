#include<iostream>
#include<vector>
#include<string>
using namespace std;


void GenParen(vector<string>& ans ,int n , int used_open , int used_close , int rem_open , int rem_close, string output){

    //base case
    if(rem_open == 0 && rem_close == 0){
        ans.push_back(output);
        return;
    }

    //1 case solve
    //include open
    if(rem_open>0){
        output.push_back('(');
    
    //RE call
    GenParen(ans , n  , used_open+1 , used_close , rem_open-1 , rem_close, output);
    //backtracking
    output.pop_back();
    }
    //include close
     if(used_open>used_close && rem_close>0){
        output.push_back(')');
    
    //RE call
    GenParen(ans , n  , used_open , used_close+1 , rem_open , rem_close-1,output);
    //backtracking
    output.pop_back();
     }
}
int main(){

vector<string>ans;
string output = "";
   int n;
    cin >> n;

int used_open = 0;
int used_close = 0;
int rem_open = n;
int rem_close = n;

GenParen(ans , n  , used_open , used_close , rem_open , rem_close, output);
for(auto s : ans){
        cout << s << endl;
    }
 return 0; 
}