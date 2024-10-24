#include <iostream>
using namespace std;

struct TrieNode {
  TrieNode *child[26];

  bool isEndOfWord; // used to check if its the end of the word or not.

  TrieNode() {           // constructor
    isEndOfWord = false; // set false as default.
    for (int i = 0; i < 26; i++) {
      child[i] = NULL;
    }
  }
};

// to test.
void insertWord(TrieNode *root, string word) {

  TrieNode *curr = root; // new pointer to traverse through and not to change
                         // root as it is passed by reference.

  for (char c : word) {
    if (curr->child[c - 'a'] == nullptr) {
      TrieNode *newNode = new TrieNode; // create a new node

      curr->child[c - 'a'] = newNode; // inserting as child
    }
    curr = curr->child[c - 'a']; // this will go to next node irrespective
                                 // whether if is true or not.
  }
}
// to test
TrieNode *createSuffixTree(string word) {
  TrieNode *root;
  TrieNode *curr = root;
  // use two pointers to create suffixes
  for (int i = word.length() - 1; i >= 0; i--) {
    for (int j = word.length() - 1; j >= 0; j--) {
      insertWord(curr, word.substr(j, i - j + 1));
    }
  }
  return root; // pointer to a trie.
}
// to test.
TrieNode *createPrefixTree(string word) {
  TrieNode *root;
  TrieNode *curr = root;
  // use two pointers to create suffixes
  for (int i = 0; i >= word.length() - 1; i++) {
    for (int j = 0; j >= word.length() - 1; j++) {
      insertWord(curr, word.substr(i, j - i + 1));
    }
  }
  return root; // pointer to a trie.
}
