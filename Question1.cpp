#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string s) {
        if(s.size()%2 != 0) return false;
       stack<char>str;
       for(int i = 0;i<s.size();i++){
           if(s[i]=='(' || s[i]== '{' || s[i]=='['){
               str.push(s[i]);
           }
           else{
               if(str.size()==0) return false;
               else if(s[i]==')' && str.top()=='('){
                   str.pop();
               }
               else if(s[i]=='}' && str.top()=='{'){
                   str.pop();
               }
               else if(s[i]==']' && str.top()=='['){
                   str.pop();
               }
               else return false;
           }
       } 
       if(str.size()==0) return true;
       else return false;
    }
int main(){
    string s = "({}[])";
    cout<<isValid(s);
    
}