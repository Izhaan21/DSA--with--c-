#include<iostream>
using namespace std;

int partition(int arr[], int s , int e ){

//choosing pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];
    
//placing pivot at right index
int count = 0;
for(int i = s+1 ; i<=e ; i++){
    if(arr[i]<= pivotElement){
    count++;
    }
}

int rightIndex = s+count;
swap(arr[pivotIndex],arr[rightIndex]);
pivotIndex = rightIndex;

//chote element on left of pivot
//bade element on right of pivot

int i = s;
int j= e;

while(i< pivotIndex && j>pivotIndex){
    while(arr[i]<pivotElement){
        i++;
    }
        while(arr[j]>pivotElement){
        j--;
    
}

if(i< pivotIndex && j>pivotIndex){
    swap(arr[i],arr[j]);
}
}



  return pivotIndex;  
}

void quickSort(int arr[], int s ,int e){

    //base case
    if(s>=e){
        return;
    }

    //1 case solve partition logic
    int p = partition(arr, s ,e);

    // RE call
    //left
    quickSort(arr, s, p-1);

    //right
    quickSort(arr,p+1 ,e);

}

int main(){
 
    int arr[] ={8,20,30,6,5,60,5};
    int n = 7;
    int s = 0 ;
    int e = n-1;
    quickSort(arr,s,e);
   
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    return 0;
    
    }

