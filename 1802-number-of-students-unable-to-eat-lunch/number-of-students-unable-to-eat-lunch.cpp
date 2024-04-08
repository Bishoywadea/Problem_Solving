class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int numOfStudsWant0=0,numOfStudsWant1=0;
        int numOf0=0,numOf1=0;
        for(int i: students) i==1?numOfStudsWant1++:numOfStudsWant0++;
        for(int i: sandwiches) i==1?numOf1++:numOf0++;

        if(numOf0==numOfStudsWant0) return 0;
        else {
            int count = 0;
            int type = 0;
            if(numOf0>numOfStudsWant0) count = numOfStudsWant0,type = 0;
            else count = numOfStudsWant1,type = 1;
            int i=0;
            while(count>0) if(sandwiches[i++] == type) count--;
            while(sandwiches[i++] != type);
            return sandwiches.size()-i+1;
        }
        return 0;
    }
};