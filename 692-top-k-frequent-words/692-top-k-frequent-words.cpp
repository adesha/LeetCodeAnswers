class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> wordFreq;
        for(string word : words)
            wordFreq[word]++;
        
        vector<pair<int,string>> maxHeap;
        for(auto itrPair : wordFreq)
            maxHeap.push_back({itrPair.second,itrPair.first});
        
        sort(maxHeap.begin(), maxHeap.end(), [this] (pair<int,string> p1, pair<int,string> p2){
            if(p1.first == p2.first)
                return p1 < p2;
            return p1.first > p2.first;
        });
        
        vector<string> ans;
        for(int i = 0; i < k; i++)
            ans.push_back(maxHeap[i].second);
        return ans;
    }
};