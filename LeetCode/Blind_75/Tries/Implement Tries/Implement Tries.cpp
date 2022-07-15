class TrieNode {
    public:
    unordered_map<char,TrieNode*> mp;
    bool end = false;
};
class Trie {
public:
    TrieNode* node;
    Trie() {
        node = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* temp = node;
        for(auto i: word){
            if(!temp -> mp[i])
                temp -> mp[i] = new TrieNode();
            temp = temp -> mp[i];
        }
        temp -> end = true;
    }
    
    bool search(string word) {
        TrieNode* temp = node;
        for(auto i:word){
            if(temp -> mp[i] == NULL) return false;
            temp = temp -> mp[i];
        }
        
        return temp -> end;
    }
    
    bool startsWith(string prefix) {
        TrieNode* temp = node;
        for(auto it: prefix){
            if(temp -> mp[it] == NULL) return false;
            temp = temp -> mp[it];
        }
        
        return true;
    }
};