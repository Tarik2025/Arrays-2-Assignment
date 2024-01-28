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
    bool f;
    for(int i=0;i<=n-1;i++)
    {   f=false;
        for(int j=0;j<=n-1;j++)
        {
            if (i==j)
            continue;
        if(v[i]==v[j])
        {
            f=true;
        }
        }
         if (f==false)
         {
            cout<<"The unique element is "<<v[i]<<endl;
         }
    
    }
    cout<<"No Unique value";  
return 0;
}