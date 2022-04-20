class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, char> umap;
        for(int i=0; i<26; i++) {
            umap[order[i]] = 'a'+i; // h -> a, l -> b
        }
        
        for(auto& word : words) {
            for(int i=0; i<word.size(); i++) {
                word[i] = umap[word[i]];
            }
        }
        return is_sorted(words.begin(), words.end());
    }
};