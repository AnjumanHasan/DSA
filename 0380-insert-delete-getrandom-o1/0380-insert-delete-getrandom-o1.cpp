class RandomizedSet {
    unordered_map<int, int> indices;
    vector<int> store;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (indices.find(val) == indices.end()){
            store.push_back(val);
            indices[val] = store.size()-1;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if (indices.find(val) == indices.end()){
            return false;
        }
        int idx = indices[val];
        indices[store[store.size()-1]] = idx;
        store[idx] = store[store.size()-1];
        store.pop_back();
        indices.erase(val);
        return true;
    }
    
    int getRandom() {
        return store[rand()%store.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */