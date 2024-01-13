class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int n = chars.size();
        int indexx = 0;
        while(i<n){
            int j = i+1;
            while(j<n && chars[i] == chars[j]){
                j++;
            }
            chars[indexx++] = chars[i];
            int count = j-i;
            if(count > 1){
            string s = to_string(count);
            for(char ch : s){
                chars[indexx++] = ch;
                
            }
            }
            i=j;
        }
        return indexx;
    }
};