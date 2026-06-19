class RecentCounter {
public:
    queue<int> reqQueue;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int low=t-3000;
        while(!reqQueue.empty()){
            int p=reqQueue.front();
            if(p<low) reqQueue.pop();
            else break;
        }
        reqQueue.push(t);
        return reqQueue.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */