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
    cout<<"The array elements are:"<<endl;
    display(v);
    vector<int> v2;
    for(int i=0;i<=n-1;i++)
    {
      v2.push_back(v[i]);
    }
   int temp=0;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {  
           if(v2[i]<v2[j])
           {
           temp=v2[i];
           v2[i]=v2[j];
           v2[j]=temp;
        }
        }
    }
    bool c=false;
    int adds=0;
    for(int i=0;i<=n-1;i++)
    {
        if(v2[i]==v[i])
        {
           c=true;
           adds++;
        }
        
    }
    if(c==true&&adds==n)
        {
           cout<<"The array is sorted";
        }
        else
        {
            cout<<"The array is not sorted";
        }
    return 0;
}