class Solution {
public:
    bool row(vector<vector<char>>& b)
    {
        for(int i = 0 ;i<9 ;i++ )
        {
            set<char> s ;
            for(int j = 0; j<9 ;j++ )
            {
                if(s.find(b[i][j])!=s.end())
                {
                    return false ;
                }
                else if(b[i][j]!='.')
                    s.insert(b[i][j]) ;
                    
            }
        }
        return true ;
    }
    
        bool col(vector<vector<char>>& b)
    {
        for(int i = 0 ;i<9 ;i++ )
        {
            set<char> s ;
            for(int j = 0; j<9 ;j++ )
            {
                if(s.find(b[j][i])!=s.end())
                {
                    return false ;
                }
                else if(b[j][i]!='.')
                    s.insert(b[j][i]) ;
                    
            }
        }
        return true ;
    }
    
    bool rowcol(vector<vector<char>>& b)
    {
         for(int i = 0  ; i <9 ;i++)
          {
              int x = 3  ;
              int y= 0 ;
              while(x--)
              {
                  set<char> s ;
                  for(int j= i; j<i+3 && i< 9; j++)
                  {
                      
                      for(int k=y; k<y+3 && y<9; k++)
                      {
                           char a= b[j][k] ;
               if(s.find(a)!=s.end())
                   return false ;
               if(b[j][k]!='.')
                s.insert(b[j][k]) ;
                      }
                  }
                  y+=3 ;
              }
              
                  i+=2 ;
          }
        return true ;
    }
    
    
    bool isValidSudoku(vector<vector<char>>& b) {
        return  row(b) && col(b) && rowcol(b) ; 
    }
};