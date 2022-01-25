#include <iostream>

using namespace std;

void merge(int *a, int start, int end){
    int mid=(start+end)/2;
    int i=start,k=start;
    int j=mid+1;
    int temp[100];
    while(i<=mid && j<=end){
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=mid)
        temp[k++]=a[i++];
    while(j<=end)
        temp[k++]=a[j++];
    for(int i=0;i<=end;i++){
        a[i]=temp[i];
    }
}

void mergeSort(int *a, int start, int end){
    if(start>=end)
        return;
    int mid=start+(end-start)/2;
    mergeSort(a,start,mid);
    mergeSort(a,mid+1,end);
    merge(a,start,end);
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}