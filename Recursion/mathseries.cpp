#include<iostream>
using namespace std;
int sum_Series(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum_Series(n-1);

}
int main()
{
    int n;
    cin>>n;
    cout<<sum_Series(n);

    return 0;
}
