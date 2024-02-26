#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
const int n = 3;
const int m = 3;

bool binarySearch(int arr[][4],int n,int m,int k){

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col-1;

    int mid = start + (end-start)/2;

    while (start<=end){
        int mid = start + (end-start)/2;
        int element = matrix[mid/col][mid%col];

        if(element == target){
            return 1;
        }
        if(element < target){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    return 0;
}

void sort(int arr[n][m]){
      for (int row = 0; row < n; row++){
        sort(arr[row],arr[row] + m);
    }
}

int main(){
    int arr[n][m];
    cout << " 3 * 3 array ";
    cout << " enter element for Matrix" <<endl;
    for (int row = 0; row < n; row++){
        for (int col = 0; col < m; col++){
            cin >>arr[row][col];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    
    sort(arr);
    cout << endl;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    int k = 3;
    cout << binarySearch(arr,n,m, k);
}