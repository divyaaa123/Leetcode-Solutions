class Solution {
public:
    string reverseWords(string s) {
      int n=s.size();
        reverse(s,0,n-1);
       
        reverseWord(s,n);
       //  cout<<s;
        return cleanSpaces(s,n);
    }
    string cleanSpaces(string &s,int n){
        int i=0,j=0;
        while(i<n && j<n){
            while(j<n && s[j]==' ')
                j++;
            while(j<n && s[j]!=' ')
                s[i++]=s[j++];
            while(j<n && s[j]==' ')
                j++;
            if(j<n)
                s[i++]=' ';
        }
        return s.substr(0,i);
    }
    void reverseWord(string &s,int n){
        int i=0,j=0;
        while(i<n && j<n){
            while(i<j || (i<n && s[i]==' '))i++;
            while(j<i || (j<n && s[j]!=' '))j++;
            reverse(s,i,j-1);
        }
    }
    void reverse(string &s,int l,int r){
        while(l<r){
            char t=s[l];
            s[l++]=s[r];
            s[r--]=t;
        }
    }
};