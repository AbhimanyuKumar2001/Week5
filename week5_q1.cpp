#include<iostream>
using namespace std;

int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        int a[26]={0};
        cin>>n;
        char c[n];
        for(i=0;i<n;i++)
            cin>>c[i];
        for(i=0;i<n;i++)
            a[c[i]-97]++;

        int max=0,p=0;
        for(i=0;i<26;i++)
            if(a[i]>max)
        {
            max=a[i];
            p=i;
        }

        if(max>1)
            cout<<char(p+97)<<"-"<<max<<endl;
        else
            cout<<"No Duplicate Present"<<endl;

    }
}
