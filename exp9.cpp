#include <bits/stdc++.h>
using namespace std;
class expp{
    public:
    string s;
    //doubt
    expp(){
        s="";
    }
    expp(string p){
        s=p;
    }
    void operator =(string p){
        s=p;
    }
    bool operator ==(expp t1){
        if(t1.s.size()!=s.size()){
            return false;
        }
        else{
            int valid=true;
            for(int i=0; i<s.size(); i++){
                if(s[i]!=t1.s[i]){
                    valid=false;
                    break;
                }
            }
            return valid;
        }
    }
    string operator +(expp t1){
        for(int i=0; i<t1.s.size(); i++){
            s.push_back(t1.s[i]);
        }
        return s;
    }
};

int main(){
}