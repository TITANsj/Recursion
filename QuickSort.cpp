#include <iostream>

using namespace std;

int partition(int* a, int s, int e){
    int pivot = a[e];
    int i=s-1,j=s;
    for(;j<=e-1;){
        if(a[j]<=pivot){
            i+=1;
            swap(a[i],a[j]);
        }
        j+=1;
    }
    swap(a[i+1],a[e]);
    return i+1;
}

void quickSort(int* a, int s, int e){
    if(s>=e)
        return;
    int p = partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}