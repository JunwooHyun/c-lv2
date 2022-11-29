#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";
    
    string v;
    bool flag = 1;
    for(int i=0; i<s.size();i++){
        
        
        
        
        if(s[i]==' '&& flag == true){
         answer += toupper(v[0]);  
         
         for(int j=1; j< v.size(); j++) answer+= tolower(v[j]);
         v= "";
         answer += " ";
         
         flag = false;
        }
        else if(s[i]==' ' && flag == false) answer += " ";
        
        else v += s[i]; flag= true;
        
        
        
    }
    if(v!=NULL)
    answer += toupper(v[0]);  
    for(int j=1; j< v.size(); j++) answer+= tolower(v[j]);
    
    
    
    
    
    return answer;
}