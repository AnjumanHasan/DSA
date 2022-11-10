class StockSpanner {
public:
    
    stack<pair<int,int>> s;
    int index;
    int t;
    StockSpanner() {
        index=-1;
    }
    
    int next(int price) {
        
        index+=1;
        
        while(!s.empty() && price>=s.top().second)
        {
            s.pop();
        }
        if(s.empty())
        {
            s.push({index,price});
            return index+1;
        }
             t=s.top().first;
            s.push({index,price});  
        return s.top().first-t;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */