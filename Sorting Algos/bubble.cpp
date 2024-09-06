#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &arr){//using reference param. to ensure the array is actually modified(we are not returning anything)
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    std::vector<int> array={10,21,42,0,9,21,432,12,43,71};
    std::cout<<"before sorting:\n";
    for(int i:array){
        std::cout<<i<<"\t";
    }
    std::cout<<std::endl;
    bubblesort(array);//to sort in ascending order
    std::cout<<"after sorting:\n";
    for(int i:array){
        std::cout<<i<<"\t";
    }
}