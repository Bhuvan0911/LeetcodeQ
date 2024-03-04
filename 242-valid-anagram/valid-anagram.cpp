class Solution {
public:
    bool isAnagram(string s, string t) {
             if(t.length()!=s.length())
                return false;
            
                 
            int i =0;
            while(i<t.length())
            {
                if(s.find(t[i]) == string::npos) //agar t ka chrachter s me present nhi hai 
                 {
                     return false;
                 }
                
                else
                    s[s.find(t[i])]= -1;  // checked charachter ko remove krne ke liye
                    i++;
                              
            }
            return true;
        
    }
};


