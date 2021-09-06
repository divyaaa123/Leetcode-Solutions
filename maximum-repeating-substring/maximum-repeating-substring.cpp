class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int c=0;
        string m=word;
        while(1){
            int p=0;
        for(int i=0;i<sequence.size();){
            if(sequence[i]==word[0]){
                int f=1;
                i++;
                int k=i;
              
                for(int j=1;j<word.size();j++){
                    if(i>=sequence.size())
                        break;
                    if(sequence[i]!=word[j])
                        break;
                    f++;
                    i++;
                }
                if(f==word.size()){
                   // cout<<i<<'\n';
                    word+=m;
                    p=1;
                    c++;
                }
                else
                    i=k;
            }
            else
                i++;
        }
            if(p==0)
            break;
        }
        return c;
    }
};