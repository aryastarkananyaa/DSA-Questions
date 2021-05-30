#include<bits/stdc++.h>
#define pp pair<int,pair<int,int>>
using namespace std;
int main(){
vector<vector<int> > arr{ { 10, 20, 30 }, 
                              { 5, 15 }, 
                              { 1, 9, 11, 18 } }; 
      
vector<int>out;
priority_queue<pp,vector<pp>,greater<pp>>pq;

for(int i=0;i<arr.size();i++){
pq.push({arr[i][0],{i,0}});

while(pq.empty()==false){
pp curr=pq.top();

// e1 represents array number
// e2 represents index number of element in ele1 th array
int e1=curr.second.first;
int e2=curr.second.second;
pp.pop();
out.push_back(curr.first);
if(e2+1<arr[e1].size())
pq.push_back({arr[e1][e2+1],{e1,e2+1}});
}

for(int i=0;i<out.size();i++)
cout<<out[i]<<" ";
return 0;
}
