class Solution {
public:
    int expandaroundindex(string s,int i,int j) 
    {
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j])
        {
            count ++;
            i --;
            j ++;
        }
        return count;
    }
     
    
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
            
        for(int center=0;center<n;center++){
            int oddkaans = expandaroundindex(s,center,center);
            count += oddkaans;
            
            int evenkaans = expandaroundindex(s,center,center+1);
            count += evenkaans;
        }
        return count;
        
    }
};