class Solution
{
    public:
    void islands(vector<vector<char>>& grid,int i,int j,int r,int c){
    if(i>=0&&i<r&&j<c&&j>=0&&grid[i][j]=='1'){
    grid[i][j]='2';
    islands(grid,i+1,j,r,c);
    islands(grid,i,j+1,r,c);
    islands(grid,i-1,j-1,r,c);
    islands(grid,i,j-1,r,c);
    islands(grid,i-1,j+1,r,c);
    islands(grid,i-1,j,r,c);
    islands(grid,i+1,j+1,r,c);
    islands(grid,i+1,j-1,r,c);
    }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
    int r=grid.size();
    if(r==0) return 0;
    int c=grid[0].size();
    int count=0;
    for(int i=0;i<r;++i){
    for(int j=0;j<c;++j){
    if(grid[i][j]=='1'){
    islands(grid,i,j,r,c);
    count+=1;
    }
    }
    }
    return count;
    }
};
