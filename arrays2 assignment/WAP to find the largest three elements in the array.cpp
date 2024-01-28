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
    int temp=0;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {  
           if(v[i]<v[j])
           {
           temp=v[i];
           v[i]=v[j];
           v[j]=temp;
        }
        }
    }
    //displaying the sorted array using a function
    // cout<<"The sorted array elements are:";
    //for(int i=0;i<n;i++)
    //{
      //  cout<<v[i]<<endl;
   // }
    cout<<"The largest three elements in the array are:"<<v[0]<<" "<<v[1]<<" "<<v[2];
}