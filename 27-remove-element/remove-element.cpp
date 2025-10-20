class Solution {
public:
    int removeElement(vector<int>& a, int k) {
        int p=0;
        int i=0;

        for(i=0;i<a.size();i++){
            if(a[i]!=k){
                a[p]=a[i];
                p++;
            }
        }
        return p;
    }
};