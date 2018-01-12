class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
          return 0;
          
        int solution = 1;
        int running_max = s.length();
        else{
            for(int k = 0; k < s.length()-1; k++){
                for(int i = k; i < s.length()-1 && i < running_max; i++)
                    for(int j = i+1; j < s.length() && j < running_max; j++ )
                        if(s[i] == s[j])
                          running_max = j;
                solution = max(solution, running_max - k);
                running_max = s.length();
            }
        }
        return solution;
    }
};
