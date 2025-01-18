#include<iostream>
#include<vector>
using namespace std;


void subSeq(string &s, int index, int n, vector<string>&ans, string &temp){
  if(index==n){
    ans.push_back(temp);
    return;
  }

  subSeq(s, index+1, n , ans, temp);
  temp.push_back(s[index]);

  subSeq(s, index+1, n, ans , temp);
  temp.pop_back();
}

int main(){
  string s="abc";
  vector<string>ans;
  string temp;
  subSeq(s, 0, s.size(), ans, temp);

  for(int i=0; i<ans.size(); i++){
      cout<<ans[i]<<endl;  
  }
}