
#include<iostream>
#include<string.h>
using namespace std;


void reverseString(char ch[]){
    int i = 0;
    int j = strlen(ch)-1;

    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    
}

 
int main(){
    char ch[100];
    

    cout<<"enter string"<<endl;
    cin.getline(ch, 100);
         // call function
    reverseString(ch);
    cout << "Reversed string: " <<ch << endl;
    return 0;
    

}
