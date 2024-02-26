#include<iostream>
using namespace std;

binarySearch(int arr[], int n ,int k){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
     while(s<=e){
        int mid = s + (e - s)/2;

        if(arr[mid] == k ){
            return mid;
        }
        else if(k > arr[mid]){
            s = mid +1 ;
        }
        else{
            e = mid - 1;
        }

     }
    return -1;
}


rotate(int arr[], int n,int pivot){
    // int pivot = getpivot(arr,n);
    int temp[n];
    int k = 0;
    for (int i = pivot; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < pivot; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }  
    for (int i = 0; i <  n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
     
}

getpivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    if(e < s ){
        return -1;
    } 
    if(e == s ){
        return s;
    }

    while (s < e){
    int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0]){
            s = mid +1;
        }
        else{e = mid;}
    }
    return s;
}

int main(){
    //  int arr[] = {0,1,2,4,4,4,5,6,6,7};
       int arr[] = {7, 9, 1, 2, 3};

    // int arr[] = {1,2,3,4,}
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    int pivot = getpivot(arr,n);
    cout << pivot << endl;
    rotate(arr,n, pivot);

    int ans = binarySearch(arr,n,k); 

    if(ans == -1){cout << "targate is not found "<< endl;}
    else {cout << "targate is found at index" << ans << endl;}
    /*
    */
}
