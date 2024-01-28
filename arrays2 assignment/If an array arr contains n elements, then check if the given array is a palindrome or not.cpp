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
    vector<int> v1;
    for(int i=0;i<n;i++)
    {
       int j=n-1-i;
       v1.push_back(v[j]);
    }
    display(v1);
    int count=0;
    for(int i=0;i<=n-1;i++)
    {
        if(v[i]==v1[i])
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"The array is a palindrome ."<<endl;
    }
    else
    {
        cout<<"The array is not a palindrome";
    }
    return 0;

}