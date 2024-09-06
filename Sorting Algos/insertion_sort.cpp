#include <bits/stdc++.h>
using namespace std;

void insertionsort(vector<int> &arr){//using reference param. to ensure the array is actually modified(we are not returning anything)
    for(int i=0;i<arr.size();i++){
        int key=arr[i],j=i-1;
        while(arr[j]>key and j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    std::vector<int> array={10,21,42,0};
    std::cout<<"before sorting:\n";
    for(int i:array){
        std::cout<<i<<"\t";
    }
    std::cout<<std::endl;
    insertionsort(array);//sorts in ascending order
    std::cout<<"after sorting:\n";
    for(int i:array){
        std::cout<<i<<"\t";
    }
}