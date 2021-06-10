class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        int n=transactions.size();
        vector<string> ans;
        vector<string>name(n,"");
        vector<string> city(n,"");
        vector<int> time(n,0);
        vector<int> amt(n,0);
        vector<bool> add(n,0);
        
        for(int i=0;i<n;i++){
            istringstream f(transactions[i]);
             string t;
             vector<string>temp;
        while(getline(f,t,',')){
            temp.push_back(t);
        }
            name[i]=temp[0];
            time[i]=stoi(temp[1]);
            amt[i]=stoi(temp[2]);
            city[i]=temp[3];
            
        }
        for(int i=0;i<n;i++){
            if(amt[i]>1000)
                add[i]=true;
            for(int j=i+1;j<n;j++){
                if(name[i]==name[j] && abs(time[i]-time[j])<=60 && !(city[i]==city[j]))
                {
                    add[i]=true;
                    add[j]=true;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(add[i])
                ans.push_back(transactions[i]);
        }
        return ans;
    }
};