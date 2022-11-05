class TrieNode {
public:
    vector<TrieNode*> children;
    bool isTerminal;
    TrieNode() : isTerminal(false) {
        children = * new vector<TrieNode*>(26, nullptr);
    }
};
class Solution {
public:
    TrieNode* root;
    vector<string> output;
    int r,c;
    
    vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<vector<bool>> visited;    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        root = new TrieNode();
        for(auto& word : words) {
            insertWord(root, word);
        }
        
        r = board.size();
        c = board[0].size();
        visited = * new vector<vector<bool>>(r, vector<bool>(c, false));
        for(int i = 0; i<r; i++) {
            for(int j = 0; j<c; j++) {
                int idx = board[i][j] - 'a';
                if(root->children[idx] != nullptr) {
                    string word = "";
                    dfs(root->children[idx], i, j, board, word);
                }
            }
        }
        return output;
    }
    
    void insertWord(TrieNode* node, string& word) {
        for(int i = 0; i<word.length(); ++i) {
            int idx = word[i] - 'a';
            if(node->children[idx] == nullptr)
                node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isTerminal = true;
    }
    
    void dfs(TrieNode* node, int si, int sj, vector<vector<char>>& board, string& word) {
        visited[si][sj] = true;
        word.push_back(board[si][sj]);
        if(node->isTerminal){
            output.push_back(word);
            node->isTerminal = false;
        }
        for(auto& [di, dj] : dirs) {
            int ei = si + di;
            int ej = sj + dj;
            if(ei < 0 || ei >= r || ej < 0 || ej >= c || visited[ei][ej])
                continue;
            int idx = board[ei][ej] - 'a';
            if(node->children[idx] == nullptr)
                continue;
            TrieNode* child = node->children[idx];
            dfs(child, ei, ej, board, word);
        }
        
        word.pop_back();
        visited[si][sj] = false;
    }
    
    
};