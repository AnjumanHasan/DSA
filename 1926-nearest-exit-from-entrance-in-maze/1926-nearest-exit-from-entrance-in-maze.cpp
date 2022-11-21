class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int rows = maze.size();
        int cols = maze[0].size();

        vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

        queue<array<int,3>> queue;

        int startRow = entrance[0], startCol = entrance[1];

        queue.push({startRow,startCol,0});
        maze[startRow][startCol] = '+';

        while(!queue.empty()){
            auto [ curRow, curCol, curDis] = queue.front();
            queue.pop();


            for(auto dir: dirs){
                int nextRow = curRow + dir.first, nextCol = curCol + dir.second;

                  if( nextRow>=0 && nextRow<rows && nextCol>=0 && nextCol<cols && 
                  maze[nextRow][nextCol] == '.'){

                      if(nextRow==0 || nextRow==rows-1 || nextCol==0 || nextCol ==cols-1)
                        return curDis+1;

                    maze[nextRow][nextCol] = '+';
                    queue.push({nextRow,nextCol,curDis+1});
                  }
            }
        }
        return -1;
    }
};