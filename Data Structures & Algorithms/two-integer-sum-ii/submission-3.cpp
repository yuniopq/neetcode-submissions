class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int izq=0, der=numbers.size()-1;
        vector<int> sol;
        while(izq<der){
            if(numbers[izq]+numbers[der] == target)
                return {izq+1, der+1};
            else if(numbers[izq]+numbers[der] > target)
                der--;
            else 
                izq++;
        }
        return {};
    }
};
