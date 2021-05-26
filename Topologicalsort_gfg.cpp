class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   vector<int>indeg(V,0);
	   for(int i=0;i<V;i++){
	   for(int u:adj[i])
	   indeg[u]++;
	   }
	   queue<int>q;
	   for(int i=0;i<V;i++){
	   if(indeg[i]==0)
	   q.push(i);
	}
vector<int>v;
while(!q.empty()){
int u=q.front();
q.pop();
v.push_back(u);
for(int i:adj[u]){
if(--indeg[i]==0)
q.push(i);
}
}
return v;
}
};
