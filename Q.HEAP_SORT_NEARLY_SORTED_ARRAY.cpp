//https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0

#include<bits/stdc++.h>
using namespace std;

//    priority_queue<int> pq;   --> max heap
//    priority_queue <int, vector<int>, greater<int> > pq;  --> min heap

int ksort(int arr[] , int k , int n)
{
    int i,j=0;
    priority_queue <int, vector<int>, greater<int> > pq;

    vector<int> ans;

    for(i=0;i<n;++i)
    {
        pq.push(arr[i]);

        if(pq.size()>k)
        {
            ans.push_back(pq.top());
            pq.pop();
        }

    }

    while(!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    for(i=0;i<n;++i)
    {
        cout<<ans[i]<<" ";
    }

    return 1;
}

int main()
{
    long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,t,n1,n2,max_sum,sum1,sum2;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        int arr[n];

        for(i=0;i<n;++i)
            cin>>arr[i];
        ksort(arr,k,n);
        cout<<"\n";
    }


    return 0;
}