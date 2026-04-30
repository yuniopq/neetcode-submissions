class Solution {
public:
    int trap(vector<int>& height) {
        int tam = height.size();
        vector<int> maxIzq(tam), maxDer(tam);
        int aTotal=0;
        maxIzq[0] = height[0];
        for(int i = 1; i < tam; i++){
            maxIzq[i] = max(maxIzq[i-1], height[i]);
        }
        maxDer[tam-1] = height[tam-1];
           for(int i = tam-2; i >= 0; i--){
            maxDer[i] = max(maxDer[i+1], height[i]);
        } 
        for(int i=0; i<tam; i++){
            aTotal+= min(maxIzq[i],maxDer[i]) - height[i];
        }    
        return aTotal;
        
    }
};