class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>str1;
        unordered_map<char,int>str2;
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2)return false;
        for(int i=0;i<n1;i++){
            str1[s[i]]++;
            str2[t[i]]++;
        }
        for(int i=0;i<n1;i++){
            if(str1[s[i]]!=str2[s[i]]){
                return false;
            }
        }
        return true;
    }
    
};