// Problem Link: https://leetcode.com/problems/find-median-from-data-stream
// Difficulty: Hard

class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> maxh; // Lower Half
    priority_queue<int,vector<int>,greater<int>> minh; // Upper Half
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxh.empty() || num < maxh.top())
            maxh.push(num);
        else
            minh.push(num);
        
        if(maxh.size() > minh.size()+1){
            minh.push(maxh.top());
            maxh.pop();
        }
        else if(maxh.size() + 1 < minh.size()){
            maxh.push(minh.top());
            minh.pop();
        }
    }
    
    double findMedian() {
        if(maxh.size() > minh.size())
            return maxh.top();
        else if(minh.size() > maxh.size())
            return minh.top();
        else
            return (minh.top()+maxh.top())/2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */