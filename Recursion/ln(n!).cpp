#include<iostream>
#include<math.h>
using namespace std;
double fact(int n)
{
    if(n==1)
    {
        return 0;
    }
    return log(n)+fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
