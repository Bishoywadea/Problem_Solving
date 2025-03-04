class Solution {
public:
    bool checkPowersOfThree(int n) {
        bool f = true;
        while(n){
            if(n%3 == 0){
                f= true;
                n/=3;
            }
            else if(n%3 == 1 && f){
                n--;
                f=false;
            }
            else{
                return false;
            }
        }
        return true;
    }
};