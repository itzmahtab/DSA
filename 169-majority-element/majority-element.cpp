class Solution {
public:
    int majorityElement(vector<int>& a) {
        int cnt=1;
                sort(a.begin(),a.end());

        int ans=a[0];
        for(int i=1;i<a.size();i++){
            if(a[i]==a[i-1]){
                cnt++;
            }
            else{
                cnt=1;
                ans=a[i];
            }
            if(cnt>(a.size()/2)){
            return ans;

            }
        }
        return ans;
        
    }
};