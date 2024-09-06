#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arr){//using reference param. to ensure the array is actually modified(we are not returning anything)
    for(int i=0;i<arr.size();i++){
        int m=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[m]>arr[j]){
                m=j;
            }
        }
        swap(arr[i],arr[m]);
    }
}
int main(){
    std::vector<int> array={10,21,42,0};
    std::cout<<"before sorting:\n";
    for(int i:array){
        std::cout<<i<<"\t";
    }
    std::cout<<std::endl;
    selectionsort(array);//sorts in ascending order
    std::cout<<"after sorting:\n";
    for(int i:array){
        std::cout<<i<<"\t";
    }
}