class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        int count = 0 , flag = 0 ;
        for( i ; i>=0 ; i--){
            if(s[i]== ' '&&flag)break;
            if(s[i]!=' '){
                flag=1;
                count++;
            }
        }
        return count;


       
        
    }
};