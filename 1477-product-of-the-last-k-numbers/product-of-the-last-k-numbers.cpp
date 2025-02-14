class ProductOfNumbers {
    vector<int> v;
    unordered_set<int> s;
    int index=0;
public:
    ProductOfNumbers() {
        v.push_back(1);
    }
    
    void add(int num) {
        if (num == 0) {
            v.clear();
            v.push_back(1);
            return;
        }
        v.push_back(v[v.size() - 1] * num);
    }
    
    int getProduct(int k) {
        if (k > v.size() - 1) return 0;
        return v[v.size() - 1] / v[v.size() - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */