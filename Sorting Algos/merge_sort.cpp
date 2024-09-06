#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int l,int m,int h){
    int n1=m-l+1,n2=h-m;
    vector<int>left(n1);
    vector<int>right(n2);

    for(int i=0;i<n1;i++){left[i]=arr[i+l];}
    for(int i=0;i<n2;i++){right[i]=arr[m+i+1];}
    int i=0,j=0,k=l;
    
    while(i<n1 and j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k++]=left[i++];
    }
    while(j<n2){
        arr[k++]=right[j++];
    }
}
void mergesort(vector<int> &arr,int l,int h){//using reference param. to ensure the array is actually modified(we are not returning anything)
    if(h>l){
        int m=(l+h)>>1;
        // or write as m=(l+(r-l))>>1 to avoid overflows
        mergesort(arr,l,m);
        mergesort(arr,m+1,h);
        merge(arr,l,m,h);
    }
}
int main(){
    std::vector<int> array={10,21,42,0};
    std::cout<<"before sorting:\n";
    for(int i:array){
        std::cout<<i<<"\t";
    }
    std::cout<<std::endl;
    mergesort(array,0,4);//sorts in ascending order
    std::cout<<"after sorting:\n";
    for(int i:array){
        std::cout<<i<<"\t";
    }
}