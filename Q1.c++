// sorting array using binary search

#include<iostream>
#include<vector>
using namespace std;

binary_sort(int arr[],int n){
    vector<int> temp;
    for (int i = 0; i < n; i++){
        if (temp.empty())
        temp.push_back(arr[i]);

        else{
            int s = 0; 
            int e = temp.size()-1;
             int pos = 0;
            while (s<=e){
               int mid = s +(e-s) /2;   
               if(temp[mid] == arr[i]){
               temp.emplace(temp.begin() + max(0,mid+1), arr[i]);
               break;}
            else if (temp[mid] > arr[i]){
                pos = e = mid - 1;
            }
            else{
                pos = s = mid + 1;
            }
            if(s> e){
                 pos = s;
               temp.emplace(temp.begin() + max(0,pos), arr[i]);
               break;
            }    
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i]<<" ";
    }cout << endl;
    
}

int main(){
    int arr[] = {2,1,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

   binary_sort(arr,n); 
}