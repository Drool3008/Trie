//
// Created by DhawalP on 16/10/23.
//

#ifndef TRIE_CLASS_TRIENODE_H
#define TRIE_CLASS_TRIENODE_H

#endif //TRIE_CLASS_TRIENODE_H
#include <iostream>
using namespace std;
class Node{
public:
    bool isTerminal;
    Node* child[26];
    Node()
    {
        isTerminal = false;
        for(int i =0;i<26;i++)
        {
            child[i] = NULL;
        }
    }
};