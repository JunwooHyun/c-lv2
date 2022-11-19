#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v;
    string r="";
    for(int i=0; i< s.size(); i++){
        
        
        
        if(s[i]==' '){
            v.push_back(stoi(r));
            r= "";
            
            
        }
        
        else r += s[i];
        
    }
    if(r!="") v.push_back(stoi(r));
    sort(v.begin(),v.end());
    
    answer += to_string(v[0]);
    answer += " ";    
    answer += to_string(v[v.size()-1]);
    
    
    
    
    
    return answer;
}