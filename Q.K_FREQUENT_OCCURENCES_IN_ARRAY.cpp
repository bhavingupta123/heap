//https://www.geeksforgeeks.org/find-k-numbers-occurrences-given-array/

#include<bits/stdc++.h>
using namespace std;

//    priority_queue<int> pq;   --> max heap
//    priority_queue <int, vector<int>, greater<int> > pq;  --> min heap


int main()
{
    long long int key,flag=0,i,s=-1,ans1=0,ele,f=-1,j,k,n,m,a,b,x,y,cnt1=0,ans3=0,ans=0,max1=0,cnt=0,t,n1,n2,max_sum,sum1,sum2,sum;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        int arr[n];
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        unordered_map<int,int> mp;
        for(i=0;i<n;++i)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }

        int total=0;
        sum=0;

        for(auto i = mp.begin() ; i!=mp.end() ; ++i)
        {
            pq.push({i->second,i->first});

            if(pq.size()>k)
                pq.pop();
        }

        while(!pq.empty())
        {
            cout<<pq.top().second<<" ";
            pq.pop();
        }

        cout<<"\n";
    }


    return 0;
}