// searching in infinity array
#include<iostream>
using namespace std;

binary(int arr[], int s, int e, int key){
    int mid = s + (e-s)/2;

    while (s <= e){
    int mid = s + (e-s)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if(arr[mid]< key){
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
    }
         return -1;
}

pos(int arr[], int key){
    int s = 0;
    int e = 1;
    int val = arr[0];

    while (val< key){
        s = e;
        e = 2*e;
        val = arr[e];
    }
    return binary(arr,s,e,key);
}

int main(){
    int arr[] = {3,5,7, 9 ,10,34,170,180,190,380};
    int key  = 10;
    int result = pos(arr,key);
    if(result == -1){cout << "Key is not found";}
    else{cout << "key is found";}
}