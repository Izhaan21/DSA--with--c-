#include<iostream>
#include <unordered_map>
#include<vector>
using namespace std;
void getPermute(vector<int>& nums ,vector<vector<int>>&ans ,int start ){
         //base case
         if(start==nums.size()){
            ans.push_back(nums);
            return;
         }
         unordered_map<int,bool>visited;
         for(int i = start ; i<nums.size(); i++){
            //unique permutation login in any order
            if(visited.find(nums[i])!= visited.end()){
                continue;
            }
            visited[nums[i]]=true;

            swap(nums[start],nums[i]);
            //RE call
            getPermute(nums , ans , start+1);
            //backtracking
            swap(nums[start],nums[i]);

         }
    }

    int main(){
            vector<int>nums{1,1,2};
            vector<vector<int>>ans;
            getPermute(nums , ans, 0);
           cout << "Unique permutations:\n";
    for (auto &v : ans) {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
             return 0;
    }