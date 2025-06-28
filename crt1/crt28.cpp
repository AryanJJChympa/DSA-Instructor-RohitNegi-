#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> d={2,13,14,17,23};
    vector<int> s={2,5,9 ,1,13};

    for(int i=0; i<d.size()-1; i++){   
        d[i]=d[i+1]-d[i];        
        cout<<d[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<s.size()-1; i++){
        s[i]=s[i+1]-s[i];  
        cout<<s[i]<<" ";      
    }

    int profit=0;
    for(int i=0; i<d.size()-1; i++){
        int abhiKAprofit=s[i]/d[i];
        profit=max(profit,abhiKAprofit);
    }
    cout<<endl;
    cout<<"PROFIT AGAYAAAAA!! : "<<profit;
}