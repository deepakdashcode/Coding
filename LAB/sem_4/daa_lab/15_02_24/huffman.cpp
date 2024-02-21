#include <bits/stdc++.h>
using namespace std;

struct Node {
    int freq;
    char ch;
    struct Node* left;
    struct Node* right;
};

struct compareNodes {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

Node* buildHuffmanTree(vector<pair<char, int>>& arr) {
    priority_queue<Node*, vector<Node*>, compareNodes> pq;
    
    for (auto &p : arr) {
        auto newNode = new Node{p.second, p.first, nullptr, nullptr};
        pq.push(newNode);
    }

    while (pq.size() > 1) {
        auto first = pq.top(); pq.pop();
        auto second = pq.top(); pq.pop();
        
        auto newNode = new Node{first->freq + second->freq, '\0', first, second};
        pq.push(newNode);
    }

    return pq.top();
}

map<char, string> generateCodes(Node *root, string prefix="") {
    map<char, string> result;

    if (!root) return result;

    if (root->left == NULL && root->right == NULL) {
        result[root->ch] = prefix;
        return result;
    }

    auto leftCodes = generateCodes(root->left, prefix+"0");
    result.insert(leftCodes.begin(), leftCodes.end());

    auto rightCodes = generateCodes(root->right, prefix+"1");
    result.insert(rightCodes.begin(), rightCodes.end());

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    map<char, int> freqMap;
    for (char c : input) {
        ++freqMap[c];
    }

    vector<pair<char, int>> freqVec;
    for (auto &p : freqMap) {
        freqVec.emplace_back(p.first, p.second);
    }

    auto root = buildHuffmanTree(freqVec);

    map<char, string> codes = generateCodes(root);

    cout << "Huffman Codes:\n";
    for (auto &p : codes)
        cout << p.first << " : " << p.second << '\n';
    
    for(char ch: input)
        cout << codes[ch];
    cout << "\n";
    return 0;
}