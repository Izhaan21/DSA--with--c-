#include<iostream>
#include<string.h>
using  namespace std;


void replaceSpace(char ch[]){
    int n = strlen(ch);

    for(int i = 0; i<n;i++){
        if(ch[i]==' '){
            ch[i]='#';
        }

    }
}



int main(){
char ch[100];
cout<<"enter string"<<endl;
cin.getline(ch,100);

replaceSpace(ch);
cout<<"new string :"<<ch<<endl;

return 0;
}