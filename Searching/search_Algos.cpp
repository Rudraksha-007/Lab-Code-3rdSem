#include <bits/stdc++.h>
using namespace std;
int index_Seq_search(vector<int>&arr,int g,int k){
    int elem[arr.size()],index[arr.size()];
    int found=0,start,end,idx=0,maybe=0;
    //set up the arrays with elements and their indexes
    for(int i=0;i<arr.size();i+=g){
        elem[idx]=arr[i];
        index[idx]=i;
        idx++;
    }
    if(k<elem[0]){
        cout<<"Element not found"<<endl;
        return found;
    }
    //iterating through elem. array to find the start index
    int i;
    for( i=1;i<idx;i++){
        if(k<=elem[i]){
            start=index[i-1];
            end=index[i];
            maybe=1;
            break;
        }
    }
    if(!maybe){
        start=index[i-1];
        end=arr.size()-1;
    }
    for(int i=start;i<=end;i++){
        if(arr[i]==k){
            found=1;
            break;
        }
    }
    if(found){
        cout<<"Element found\n";
    }
    return found;
}
int main(){
    vector<int>arr={10,20,30,40,50,60,70,80,90,100,110,120};
    int t;
    cout<<"enter value to search\n";
    cin>>t;
    int rv=index_Seq_search(arr,3,t);
    return 0;
}