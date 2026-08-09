class Solution {
public: 
    bool treverse(vector<vector<char>>& board,int sr,int er,int sc,int ec){
        unordered_set<int>s;
        for(int i=sr;i<=er;i++){
            for(int j=sc;j<=ec;j++){
                if(board[i][j]=='.') continue;
                if(s.find(board[i][j])!=s.end()) return false;
                s.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        //row cheak
        for(int i=0;i<9;i++){
            unordered_set<int>s;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(s.find(board[i][j])!=s.end())return false;
                s.insert(board[i][j]);
            }
        }
        //columb cheak
        for(int j=0;j<9;j++){
            unordered_set<int>s;
            for(int i=0;i<9;i++){
                if(board[i][j]=='.') continue;
                if(s.find(board[i][j])!=s.end())return false;
                s.insert(board[i][j]);
            }
        }
        //3*3 ke box ko cheak 
        for(int sr=0;sr<9;sr+=3){
                int er=sr+2;
                for(int sc=0;sc<9;sc+=3){
                    int ec=sc+2;
                    if(!treverse(board,sr,er,sc,ec)) return false;
                }
        }
        return true;

    }
};
