class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> conj(nums.begin(),nums.end());
        int racha=0;
        for(int num:conj){
            if(conj.find(num-1)==conj.end()){
                int longitud = 1;
                while(conj.find(num+1)!=conj.end()){
                    num++;
                    longitud++;
                }
                racha = max(longitud,racha);
            }
        }
        return racha;
    }
};
