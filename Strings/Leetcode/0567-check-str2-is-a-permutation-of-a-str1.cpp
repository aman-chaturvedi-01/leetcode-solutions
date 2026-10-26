class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()){
            return false ;
        }
        int k = s1.length() ;
        unordered_map<char,int>freq1 ;
        for(int i=0 ; i<s1.length();i++){
            freq1[s1[i]]++ ;   
        }
        unordered_map<char,int>freq2 ;
        for(int i=0;i<s2.size();i++){
            freq2[s2[i]]++ ;

            if(i>=k){
                freq2[s2[i-k]]-- ;
                if(freq2[s2[i-k]] == 0)
                    freq2.erase(s2[i-k]) ;
            }
            if(i >= k-1 && freq1 == freq2){
                return true ;
            }
        }
        return false ;
    }
};
