class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        if (n1!=n2) 
            return false;
        
        
        vector v1(26, 0);
        vector v2(26, 0);
        unordered_set<int> us;
        for(int i = 0;i < n1;i++)
        {
            v1[word1[i] - 'a']++;
            us.insert(word1[i]);
            v2[word2[i] - 'a']++;
        }
        for(int i = 0;i < n2;i++)
        {
		
            if (us.find(word2[i]) == us.end()) 
                return false;
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        
        for(int i = 0 ;i < 26;i++)
        {
            if (v1[i] != v2[i]) 
                return false;
        }
        return true;
    }
};