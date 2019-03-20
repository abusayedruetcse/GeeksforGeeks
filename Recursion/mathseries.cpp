#include<iostream>
using namespace std;
int sum_Series(int first,int pos,int n)
{
    if(pos==n+1)
    {
        return 0;
    }
    int sum=1;
    for(int i=0;i<pos;i++)
    {
        sum*=(first+i);
    }
    return sum+sum_Series(first+pos,pos+1,n);

}
int main()
{
    int n;
    cin>>n;
    cout<<sum_Series(1,1,n);

    return 0;
}
