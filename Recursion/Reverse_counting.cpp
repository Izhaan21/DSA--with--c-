#include<iostream>
using namespace std;


int printcount(int n ){

    if(n==1){
        return 1;
    }
     
    cout<<n<<endl;

   int ans = printcount(n-1);
   return ans;
} 

int main(){
int n ;
cout<<"enter the value of n"<<endl;
cin>>n;
int ans = printcount(n);
cout<<ans;
cout<<endl;

return 0;

}