#include<iostream>
using namespace std;


int factorial(n){

   int fact = 1;

   for(int 1 = 0;i<=n;i++){
    fact = fact*i;
    return fact;
   }

   int ncr(int n , int r){

    int nume= factorial(n);
    int deno = factorial(r)*factorial(n-r);
    int ans = nume/deno;
    return ans;
   }
}
int  main(){

int n,r;

cin>>n>>r>>endl;


}