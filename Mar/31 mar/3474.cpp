class Solution {
public:
    bool isSame(string &word, string &str2, int i, int m){
        if(i + m > word.size()) return false;

        for(int j = 0; j < m; j++){
            if(word[i + j] != str2[j]){
                return false;
            }
        }
        return true;
    }

    string generateString(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();

        int N = n + m - 1;
        string word(N, '$');

        vector<bool> canChange(N, false);

        // Step 1: Force 'T' placements
        for(int i = 0; i < n; i++){
            if(str1[i] == 'T'){
                int i_ = i;
                for(int j = 0; j < m; j++){
                    if(word[i_] != '$' && word[i_] != str2[j]){
                        return "";
                    }
                    word[i_] = str2[j];
                    i_++;
                }
            }
        }

        // Step 2: Fill remaining with 'a'
        for(int i = 0; i < N; i++){
            if(word[i] == '$'){
                word[i] = 'a';
                canChange[i] = true;
            }
        }

        // Step 3: Handle 'F'
        for(int i = 0; i < n; i++){
            if(str1[i] == 'F'){
                if(isSame(word, str2, i, m)){
                    bool changed = false;

                    for(int k = i + m - 1; k >= i; k--){
                        if(canChange[k]){
                            word[k] = 'b';
                            changed = true;
                            break;
                        }
                    }

                    if(!changed){
                        return "";
                    }
                }
            }
        }

        return word;
    }
};