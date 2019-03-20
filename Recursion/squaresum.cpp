#include<iostream>
using namespace std;
int sum_Series(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*n+sum_Series(n-1);

}
int main()
{
    int n;
    cin>>n;
    cout<<sum_Series(n);

    return 0;
}

