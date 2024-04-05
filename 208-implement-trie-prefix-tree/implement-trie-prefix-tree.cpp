class Trie {
private:
    class TrieNode {
    public:
        vector<TrieNode*> v;
        bool marked;
        TrieNode() {
            marked = 0;
            v.resize(26, nullptr);
        };
    };
    TrieNode* r;
public:
    Trie() {
        r = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* cur = r;
        int i=0;
        while(i<word.length()){
            if(cur->v[word[i]-'a']) cur=cur->v[word[i]-'a'];
            else cur->v[word[i]-'a'] = new TrieNode(),cur=cur->v[word[i]-'a'];
            i++;
        }
        cur->marked=1;
    }
    
    bool search(string word) {
        TrieNode* cur = r;
        int i=0;
        while(i<word.length()){
            if(cur->v[word[i]-'a']) cur=cur->v[word[i]-'a'];
            else return 0;
            i++;
        }
        return cur->marked;
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur = r;
        int i=0;
        while(i<prefix.length()){
            if(cur->v[prefix[i]-'a']) cur=cur->v[prefix[i]-'a'];
            else return 0;            
            i++;
        }
        return 1;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */