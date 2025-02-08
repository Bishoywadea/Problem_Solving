class NumberContainers {
    unordered_map<int, priority_queue<int>> m;
    unordered_map<int,int> in;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        in[index] = number;
        m[number].push(-1*index);
    }
    
    int find(int number) {
        while(!m[number].empty() && in[-1*m[number].top()] != number){
            m[number].pop();
        }
        if(m[number].empty()) return -1;
        return -1*m[number].top();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */