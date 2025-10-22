class Solution {
public:
    int majorityElement(vector<int>& a) {

        int cnt = 1, ans = a[0]; // start count at 1
        sort(a.begin(), a.end());
        
        int maxCnt = 1;
        ans = a[0];
        
        for (int i = 1; i < a.size(); i++) {
            if (a[i] == a[i - 1]) {
                cnt++;
            } else {
                cnt = 1;
            }
            
            if (cnt > maxCnt) {
                maxCnt = cnt;
                ans = a[i];
            }
        }

        return ans;
    }
};
