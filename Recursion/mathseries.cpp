#include<iostream>
using namespace std;
int sum_Series(int n)
{
    if(n==1)
    {
        return 1;
    }
    int mul=1;
    for(int i=0;i<n;i++)
    {
        mul*=n;
    }
    return mul+sum_Series(n-1);

}
int main()
{
    int n;
    cin>>n;
    cout<<sum_Series(n);

    return 0;
}
