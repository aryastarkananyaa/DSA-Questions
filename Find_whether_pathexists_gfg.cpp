#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    void check(vector<vector<int>>& grid,int sx,int sy,int dx,int dy,int n,vector<vector<bool>>& vis){
    if(sx<0||sy<0||sx>=n||sy>=n||grid[sx][sy]==0||vis[sx][sy])
    return;
    else{
    vis[sx][sy]=true;
    check(grid,sx+1,sy,dx,dy,n,vis);
     check(grid,sx,sy+1,dx,dy,n,vis);
      check(grid,sx-1,sy,dx,dy,n,vis);
       check(grid,sx,sy-1,dx,dy,n,vis);
    }
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
    int n= grid.size();
    vector<vector<bool>>vis(n,vector<bool>(n,false));
    int sx=0,sy=0,dx=0,dy=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(grid[i][j]==1){
        sx=i;
        sy=j;
        }
        else if(grid[i][j]==2){
        dx=i;
        dy=j;
        }
        }
    }
    check(grid,sx,sy,dx,dy,n,vis);
    return vis[dx][dy];
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends
