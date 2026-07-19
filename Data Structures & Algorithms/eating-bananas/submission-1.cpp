class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 0;
        for (int p : piles){
            if (max < p)    max = p;
        }
        
        int i = 1, d = max, k;

        while (i <= d){
            k = i + (d - i) / 2;
            if (calcT(piles, k) <= h)  d = k - 1;
            else                       i = k + 1;
        }

        return i;
    }

    int calcT(vector<int>& piles, int k){
        int t = 0;
        for (int i = 0; i < piles.size(); i++){
            t += (piles[i] + k - 1) / k;
        }
        return t;
    }
};
