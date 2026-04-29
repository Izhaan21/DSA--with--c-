#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;

    int num[100];
     cout<<"Array"<<endl;
    for(int i = 0 ; i<size;i++){
        cin>>num[i];

     cout<<"elements are:"<<num[i]<<endl;
    }
    
       
     return 0;
}