class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    void Xcheck(vector<vector<char>>& grid,int i,int j,int r,int c){
       if(i>=0&&i<r&&j<c&&j>=0&&grid[i][j]=='X'){
    grid[i][j]='Y';
    Xcheck(grid,i+1,j,r,c);
    Xcheck(grid,i,j+1,r,c);
    Xcheck(grid,i,j-1,r,c);
    Xcheck(grid,i-1,j,r,c);
    }
    }
    int xShape(vector<vector<char>>& grid) 
    {
     int r=grid.size();
     if(r==0) return 0;
     int c=grid[0].size();
     int count=0;
     for(int i=0;i<r;++i){
     for(int j=0;j<c;++j){
     if(grid[i][j]=='X'){
     Xcheck(grid,i,j,r,c);
     count+=1;
     }
     }
     }
     return count;
     
     
    }
};
