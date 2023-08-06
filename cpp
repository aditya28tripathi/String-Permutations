class Solution{
    public:
    //Complete this function
    
    vector<string> permutation(string s)
    {
        vector<string>ans;
        string temp;
        fun(0,s,ans);
        
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
    void fun(int ind,string s,vector<string>&ans){
        if(ind==s.size()){
            ans.push_back(s);
            
            
            
            
            return;
        }
        
        for(int i=ind;i<s.size();i++)
        
        {


            swap(s[i],s[ind]);
            
            fun(ind+1,s,ans);
    
            swap(s[i],s[ind]);
        }
    }
};
