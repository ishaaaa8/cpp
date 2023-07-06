#include<bits/stdc++.h>
using namespace std;

bool isSafe(int maze[][3],int row,int col,int srcx,int srcy,vector<vector<int>> &visited)
{
    if((srcx>=0 && srcx<row)&&(srcy>=0 && srcy<col)&& (maze[srcx][srcy]==1) && (visited[srcx][srcy]==0))
    {
        return true;
    }
    else{
        return false;
    }
} 

void path_finder(int maze[][3],int row,int col,int srcx,int srcy,vector<vector<int>> &visited,vector<string> &path,string output)
{
    if(srcx==row-1 && srcy==col-1)
    {
        path.push_back(output);
        return;
    }
    
    //down
    //i+1,j
   
    if(isSafe(maze,row,col,srcx+1,srcy,visited))
    {
        visited[srcx+1][srcy]=1;
   
        path_finder(maze,row,col,srcx+1,srcy,visited,path,output+'D');
        visited[srcx+1][srcy]=0;
    }
    //right
    //i,j+1

    if(isSafe(maze,row,col,srcx,srcy+1,visited))
    {
        visited[srcx][srcy+1]=1;
        
        path_finder(maze,row,col,srcx,srcy+1,visited,path,output+'R');
        visited[srcx][srcy+1]=0;
    }
    //rleft
    //i,j-1

    if(isSafe(maze,row,col,srcx,srcy-1,visited))
    {
        visited[srcx][srcy-1]=1;
        // output+='R';
        path_finder(maze,row,col,srcx,srcy-1,visited,path,output+'L');
        visited[srcx][srcy-1]=0;
    }
    //up
    //i-1,j
    
    if(isSafe(maze,row,col,srcx-1,srcy,visited))
    {
        visited[srcx-1][srcy]=1;
        // output+='U';
        path_finder(maze,row,col,srcx-1,srcy,visited,path,output+'U');
        visited[srcx-1][srcy]=0;
    }

}

int main(){
    int row=3;
    int col=3;
    
    int maze[3][3]={{1,0,0},{1,1,0},{1,1,1}};
    
    vector<vector<int>>visited(row,vector<int>(col,0));
    visited[0][0]=1;
    if(maze[0][0]==0)
    {
        cout<<"No maze found"<<endl;
    }
    vector<string>path;
    string output="";
    path_finder(maze,row,col,0,0,visited,path,output);
    for(auto i:path)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    if(path.empty()){
        cout<<"NO path found";
    }

    return 0;
}