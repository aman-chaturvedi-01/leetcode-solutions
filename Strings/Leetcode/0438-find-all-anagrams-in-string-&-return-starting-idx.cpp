class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans ;
        if(p.size() > s.size()){
            return {} ;
        }
        unordered_map<char,int>freq1 ;
        for(int i=0;i<p.size();i++){
            freq1[p[i]]++ ;
        }
        int k = p.size() ;
        unordered_map<char,int>freq2 ;
        for(int i=0;i<s.size();i++){
            freq2[s[i]]++ ;

            if(i>=k){
                freq2[s[i-k]]-- ;
                if(freq2[s[i-k]] == 0){
                    freq2.erase(s[i-k]);
                }
            }
            if(i>= k-1 && freq1 == freq2){
                ans.push_back(i-k+1) ;
            }
        }
        return ans ;
    }
};
