#include<iostream>
#include<stack>
#include<vector>
using namespace std;
 vector<int> nextGreaterElements(vector<int>& a) { // method 2
        int n = a.size();
        stack<int>st;
        vector<int>ans(n,-1);
        for(int i = 0;i<2*n;i++){
            while(st.size() != 0 && a[i % n]>a[st.top()]){
                ans[st.top()] = a[i % n];
                st.pop();
            }
            st.push(i % n);
        }
        return ans;
    }
int main(){
    vector<int>v{8,4,6,2,3};
    v = nextGreaterElements(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    
}