#include <iostream>
#include <vector>
using namespace std;

//Dutch National Flag

void takeinput(vector<int> &arr){
    cout<<"enter the elements of vector"<<endl;
for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
}


void printArray(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void moveAllNegative(vector<int> &arr) {  //pass by refrence any change to function vector will reflect to original vector in main using &arr
    int l = 0;
    int h = arr.size() - 1;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    while (l < h) {
        if (arr[l] < 0)
            l++;
        else if (arr[h] >= 0)
            h--;
        else
            swap(arr[l], arr[h]);
    }
}

int main() {
    vector<int> arr = {1, 4, 5, -3, 5, -9, 5, -10};
    
    takeinput(arr);
    moveAllNegative(arr);
    printArray(arr);
    return 0;
}
