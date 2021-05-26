class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
int dx[8] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N){
queue<pair<int,int>>q;
int count=0;
vector<vector<bool>> visited(N+1,vector<bool>(N+1,false));
q.push({KnightPos[0],KnightPos[1]});
visited[KnightPos[0]][KnightPos[1]]=true;
while(!q.empty())
{
int n=q.size();
for(int i=0;i<n;i++) { auto tmp=q.front();
q.pop();
if(tmp.first==TargetPos[0] and tmp.second==TargetPos[1])
return count;
 for(int i=0;i<8;i++){ int nx=tmp.first+dx[i];
int ny=tmp.second+dy[i];
 if(nx>=1 and nx<=N and ny>=1 and ny<=N and !visited[nx][ny])
{
visited[nx][ny]=true;
q.push({nx,ny});
}
}
}
count++;
}
return -1;
}
};
