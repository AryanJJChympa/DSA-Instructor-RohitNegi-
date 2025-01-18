//printing all elements without removing from queue
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);

    int n=q.size();
    while(n--){
        cout<<q.front()<<endl;
        q.push(q.front());
        q.pop();
    }
    cout<<q.size()<<endl;
}