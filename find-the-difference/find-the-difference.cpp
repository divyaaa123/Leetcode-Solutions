class Solution {
public:
    char findTheDifference(string s, string t) {
         int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<t.size();i++){
          arr[t[i]-'a']^=1;
        }
        for(int i=0;i<s.size();i++){
            arr[s[i]-'a']^=1;
        }
        for(int i=0;i<26;i++)
            if(arr[i]==1)
                return i+'a';
        return '0';
        //Space Complexity: O(1)
        //Time Complexity: O(N)
    }
};