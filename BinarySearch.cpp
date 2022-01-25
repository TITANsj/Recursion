#include <iostream>

using namespace std;

int binarySearch(int a[], int start, int end, int x){
    if(start<=end){
        int mid=start+(end-start)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            return binarySearch(a,start,mid,x);
        return binarySearch(a,mid+1,end,x);
    }    
    return -1;
}

int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<binarySearch(a,0,n-1,x);
    return 0;
}