class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1,0);
        for(int i=1;i<=n;i++){

            if(i%2 ==1){
                ans[i]= ans[i/2] + 1; // odd no
            }
            else{
                ans[i]=ans[i/2]; // even no
            }
        }
        return ans;
        
    }
};