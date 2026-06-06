#include<iostream>
#include<string>
using  namespace std;


int getlen(char name[]){
    int length = 0 ;
    int i = 0;
    while (name[i]!= '\0'){
        length++;
        i++;
    }
    return length;
}

int main(){
 char name[100];

 cout<<"Enter name"<<endl;
 cin>>name;

 cout<<"length is:"<< getlen <<endl;

 return 0;
}