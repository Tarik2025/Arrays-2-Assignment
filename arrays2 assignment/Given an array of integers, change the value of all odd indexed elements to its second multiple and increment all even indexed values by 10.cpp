#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a)
{
    cout<<"The array elements are:"<<endl;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    vector<int> v;
    cout<<"enter the elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    
    for(int i=0;i<=n-1;i++)
    {
        if(i%2==0)
        {
            v[i]+=10;
        }
        if(i%2!=0)
        {
            v[i]*=2;
        }
    }
    display(v);
    
return 0;
}