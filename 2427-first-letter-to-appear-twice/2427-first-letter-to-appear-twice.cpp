class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>m;
        for(char d:s)
        {
            m[d]++;
            if(m[d]==2)
            return d;
        }
        return ' ';
        
    }
};