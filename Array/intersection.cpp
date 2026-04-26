#include<iostream>
#include<vector>
using namespace std;


int  main(){
     int n;
     int m;
    cout<<"enter the size of arr"<<endl;
    cin>>n;

     vector<int>arr(n);
     
    cout<<"enter thr size of brr"<<endl;
    cin>>m;
    vector<int>brr(m);

    vector<int>ans;

    cout<<"enter the elements of arr"<<endl;
    for(int i =0 ; i<arr.size() ; i++){
        cin>>arr[i];
    }

    cout<<"enter the elements of brr"<<endl;
    for(int j =0 ; j<brr.size() ; j++){
        cin>>brr[j];

    
    }
    
    for(int i =0 ; i<arr.size() ; i++){
             int element = arr[i];
         for(int j =0 ; j<brr.size() ; j++){
            if(  element == brr[j]){
                  ans.push_back(element);
            }
    }

}

 for(auto value : ans){
    cout<< value <<"";
 }
 cout<<endl;

 return 0;
}
