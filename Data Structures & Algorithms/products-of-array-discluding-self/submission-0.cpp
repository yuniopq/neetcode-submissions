class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int tam = nums.size();
        vector<int> prefijo(tam), sufijo(tam),res(tam);
        prefijo[0]=(1);
        
        for(int i=1; i<tam; i++)
            prefijo[i]=(prefijo[i-1]*nums[i-1]);
        
        sufijo[tam-1] = 1;
        for(int i=tam-2; i>=0; i--)
            sufijo[i]=(sufijo[i+1]*nums[i+1]);

        for(int i = 0; i<nums.size(); i++)
            res[i]=(prefijo[i]*sufijo[i]);

        return res;
    }
};
