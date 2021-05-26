class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	bool visit[V+1];
	for(int i=0;i<V;i++)
	visit[i]=false;
    queue<int>q;
    q.push(0);
    visit[0]=true;
    if(X==0) return 0;
    int count=0;
    while(!q.empty()){
          count++;
    int s=q.size();
    for(int i=0;i<s;i++){
    int u=q.front();
    q.pop();
    visit[u]=true;
    for(auto x:adj[u]){
  if(x==X) return count;
     if(visit[x]==false){
     q.push(x);
     }
    }
    }
    
    }
    return -1;
    }
};
