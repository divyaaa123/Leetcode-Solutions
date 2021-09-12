class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26,0);
        for(int i=0;i<magazine.size();i++){
            v[magazine[i]-'a']++;
            
        }
        for(int i=0;i<ransomNote.size();i++){
            v[ransomNote[i]-'a']--;
            if(v[ransomNote[i]-'a']<0)
                return false;
            
        }
        return true;
    }
};
//Time Complexity: O(Max(len(a),len(b)))
//Space Complexity: O(1)