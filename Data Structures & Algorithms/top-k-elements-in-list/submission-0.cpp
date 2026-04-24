class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> contador;
        
        for(int n:nums)
            contador[n]++;
        
        vector<vector<int>> cont_invertido(nums.size()+1);
        
        for (auto [numero,frequencia]:contador)
            cont_invertido[frequencia].push_back(numero);
        
        int k_actual=0;
        vector<int> resultado;
        for(int i=cont_invertido.size()-1; i>=0 and k_actual<k; i--){
            for(int n:cont_invertido[i]){
                resultado.push_back(n);
                k_actual++;
            }
        }
        return resultado;
        
    }
};