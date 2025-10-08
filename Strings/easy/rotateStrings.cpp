class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;

        string doubled = s + s;
        int n = goal.length();
        int i = 0; 
        int j = 0; 

        while (i < doubled.length()) {
            if (doubled[i] == goal[j]) {
                i++;
                j++;
                if (j == n) return true;
            } else {
                i = i - j + 1;
                j = 0;
            }
        }

        return false;
    }
};
