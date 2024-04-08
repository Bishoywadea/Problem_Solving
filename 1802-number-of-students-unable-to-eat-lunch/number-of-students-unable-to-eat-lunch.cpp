class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int z=0,o=0;
        int zz=0,oo=0;
        for(int i: students) i==1?o++:z++;
        for(int i: sandwiches) i==1?oo++:zz++;

        if(zz==z) return 0;
        else {
            if(zz>z){
                int i=0;
                while(z>0) if(!sandwiches[i++]) z--;
                while(sandwiches[i++]);
                return sandwiches.size()-i+1;
            }
            else{
                int i=0;
                while(o>0) if(sandwiches[i++]) o--;
                while(!sandwiches[i++]);
                return sandwiches.size()-i+1;
            }
        }
        return 0;
    }
};