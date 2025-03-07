class Solution {
    bool isPrime(int n){
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++)
            if(n%i == 0) return false;
        
        return true;
    }
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> p;
        for(int i=left; i<=right; i++){
            if(isPrime(i)) p.push_back(i);
        }
        if(p.size()<2) return{-1,-1};
        int ans=right-left+1;
        vector<int> res;
        for(int i=0;i<p.size()-1;i++){
            if(p[i+1]-p[i] < ans) ans=p[i+1]-p[i], res={p[i],p[i+1]};
        }

        return res;
    }
};