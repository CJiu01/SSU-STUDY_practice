#include <iostream>
using namespace std;
void bubble(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}
int csearch(int start, int end, int n,int *arr){
    if(start>end) return 0;
    int midd = (start+end)/2;
    if(arr[midd]==n) return 1;
    else if(arr[midd]>n) return csearch(start,midd-1,n,arr);
    else return csearch(midd+1,end,n,arr);
}
int main(){
    int n, m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //bubble sort 이용하여 정렬
    bubble(arr,n);

    cin>>m;
    int user[m];
    for(int i=0;i<m;i++)
        cin>>user[i];

    //정렬된 배열을 이분 탐색을 통해 확인
    for(int i=0;i<m;i++)
        user[i]=csearch(0,n-1,user[i],arr);

     for(int i=0;i<m;i++)
        cout<<user[i]<<' ';
}
