#include <dk.h>

using namespace std;

// Node structure for Huffman tree
struct Node {
    char data;
    int freq;
    Node* left;
    Node* right;
};

// Comparator for priority queue
struct compare {
    bool operator()(Node* l, Node* r) {
        return l->freq > r->freq;
    }
};

// Function to create a new Huffman tree node
Node* newNode(char data, int freq) {
    Node* node = new Node();
    node->data = data;
    node->freq = freq;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

// Function to build Huffman tree
Node* buildHuffmanTree(unordered_map<char, int>& freqMap) {
    priority_queue<Node*, vector<Node*>, compare> minHeap;

    // Create leaf nodes and push them to the minHeap
    for (auto& pair : freqMap) {
        minHeap.push(newNode(pair.first, pair.second));
    }

    // Construct Huffman tree
    while (minHeap.size() != 1) {
        Node* left = minHeap.top();
        minHeap.pop();

        Node* right = minHeap.top();
        minHeap.pop();

        int sum = left->freq + right->freq;
        Node* parent = newNode('$', sum); // '$' is a special character used to denote internal nodes
        parent->left = left;
        parent->right = right;
        minHeap.push(parent);
    }

    return minHeap.top();
}

// Function to traverse Huffman tree and generate codes
void generateCodes(Node* root, string code, unordered_map<char, string>& codes) {
    if (root == nullptr) return;

    if (root->data != '$') {
        codes[root->data] = code;
    }

    generateCodes(root->left, code + "0", codes);
    generateCodes(root->right, code + "1", codes);
}

// Function to encode a string using Huffman codes
string encode(string input, unordered_map<char, string>& codes) {
    string encodedString = "";
    for (char c : input) {
        encodedString += codes[c];
    }
    return encodedString;
}

int main() {
    string input = "ABBCDBCCDAABBEEEBEAB";

    unordered_map<char, int> freqMap;
    for (char c : input) {
        freqMap[c]++;
    }

    Node* root = buildHuffmanTree(freqMap);

    unordered_map<char, string> codes;
    generateCodes(root, "", codes);

    cout << "Character Codes:\n";
    for (auto& pair : codes) {
        cout << pair.first << ": " << pair.second << endl;
    }

    string encodedString = encode(input, codes);
    cout << "Encoded String: " << encodedString << endl;

    return 0;
}
