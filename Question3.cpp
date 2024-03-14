#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> finalPrices(vector<int>& prices) {
       stack<int>st;
       int n = prices.size();
       vector<int>ans(n);
       st.push(prices[n-1]);
       ans[n-1] = prices[n-1];
       for(int i = n-2;i>=0;i--){
           while(st.size() && st.top()>prices[i]){
               st.pop();
           }
           if(st.size()) ans[i] = prices[i] - st.top();
           else ans[i] = prices[i];
           st.push(prices[i]);
       } 
       return ans;
    }
int main(){
    vector<int>v{8,4,6,2,3};
    v = finalPrices(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    
}