#include <bits/stdc++.h>
using namespace std;
int lomutopart(vector<int>&arr,int l,int h){
    int i=l-1,pivot=arr[h];
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }swap(arr[i+1],arr[h]);
    return i+1;
}
void quicksort(vector<int>&arr,int l,int h){
    if(h>l){
        int p=lomutopart(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}
int main(){
    std::vector<int> array={10,21,42,0};
    std::cout<<"before sorting:\n";
    for(int i:array){
        std::cout<<i<<"\t";
    }
    std::cout<<std::endl;
    quicksort(array,0,4);//sorts in ascending order
    std::cout<<"after sorting:\n";
    for(int i:array){
        std::cout<<i<<"\t";
    }
    return 0;
}