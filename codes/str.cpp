#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "anagram";
    string t = "mangaar";
    int count1[26] = {0};
        int count2[26] = {0};

        for(int i = 0; i<s.length(); i++){
            int index = s[i]-'a';
            count1[index]++;
        }

        for(int i = 0; i<t.length(); i++){
            int index = t[i]-'a';
            count2[index]++;
        }

    
        if(count1[i] != count2[i]){
            cnt++;
        }
        else cout<<0;
}