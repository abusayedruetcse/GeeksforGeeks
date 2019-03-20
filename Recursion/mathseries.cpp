#include<iostream>
using namespace std;
int sum_Series(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    if(b>a)
    {
        sum_Series(b,a);
    }
    else
    {
       return sum_Series(a,b-1)+a;

    }

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<sum_Series(a,b);

    return 0;
}
