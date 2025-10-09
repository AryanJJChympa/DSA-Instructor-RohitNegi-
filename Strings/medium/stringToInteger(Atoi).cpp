class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int i=0;
        int sign = 1;
        long long res=0;

        //handle space
        while(i<n && s[i]==' ') i++;

        //handle sign
        if(s[i]=='-'){
            sign= -1;
            i++;
        }else if(s[i]=='+'){
            i++;
        };

        //handle digits
        while(i<n && isdigit(s[i])){
            int digit = s[i] - '0';

            if(res > INT_MAX/10 || (res==INT_MAX/10 && digit > 7)){
                return (sign==1) ? INT_MAX : INT_MIN;
            }

            res = res*10+digit;
            i++;
        }

        return (int)(res*sign);
    }
};