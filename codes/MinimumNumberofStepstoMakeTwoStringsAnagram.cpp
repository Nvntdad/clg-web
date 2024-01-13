#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "leetcode";
    string t = "practice";
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
        int temp = 0;
        int total = 0;
         for(int i =0; i<26;i++){
             temp = count1[i]-count2[i];
             if(temp>0){
                total = total+temp;
             }
         }
        return total;
    // int cnt=0;
    // // int n =count1.length();
    // for(int i =0; i<26;i++){
    //     if(count1[i] != count2[i]){
    //         cnt++;
    //     }
    // }
    // cout<<cnt;
}