class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        stack<string>st;
        string word ="";

        for(char c : s){
            if(c!= ' '){
                word+=c;
            }else if(!word.empty()){
                st.push(word);
                word="";
            }
        }

        if(!word.empty()) st.push(word);

        string res="";


       while(!st.empty()){
        res+=st.top();
        st.pop();
        if(!st.empty()) res+=' ';
       }
       return res;
    }
};