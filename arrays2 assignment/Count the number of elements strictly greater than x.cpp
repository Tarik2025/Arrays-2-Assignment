#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    vector<int> v;
    cout<<"enter the elements in the array:";
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<"The array elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    int x;
    cout<<"enter the target number :";
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++)
    {
        if(v[i]>x)
        {
            count++;
        }
    }
    cout<<"The no of numbers in the array which are strictly greater than the target number is: "<<count<<endl;
    return 0;
}