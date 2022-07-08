#include <iostream>
using namespace std;

int factorial(int t)
{
    int res=1;
    while(t>0){
        res*=t--;
    }
    return res;
}
int bino(int n, int k)
{
    if(k==0)
        return 1;
    return factorial(n);
    
}



int main()
{
    int n,k;
    cin>>n>>k;
    cout<<bino(n,k)<<endl;
    return 0;
}