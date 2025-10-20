class Solution {
public:
    int removeDuplicates(vector<int>& a) {
         if(a.size() == 0) return 0;
        int index=1;
        
        for(int i= 1; i< a.size(); i++){
            if(a[i-1]!=a[i]){
                    a[index]=a[i];
                index++;
            }
        }
        return index;
    }
};