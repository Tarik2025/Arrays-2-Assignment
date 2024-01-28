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
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<=n-1;i++)
    {
        if(i%2==0)
        {
            evensum+=v[i];
        }
        if(i%2!=0)
        {
            oddsum+=v[i];
        }
    }
    cout<<"The difference between the sum of elements at even indices to the sum of elements at odd indices is :"<<evensum-oddsum;
return 0;
}