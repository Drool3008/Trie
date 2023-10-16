//
// Created by DhawalP on 16/10/23.
//

#ifndef TRIE_INSERT_IN_TRIE_H
#define TRIE_INSERT_IN_TRIE_H

#endif //TRIE_INSERT_IN_TRIE_H
#include "Class_TrieNode.h"
void add(string word,Node* trie)
{
    int n = word.size();
    for(int i=0;i<n;i++)
    {
        if(trie->child[word[i] - 'A'] == NULL)
        {
            trie->child[word[i] - 'A'] = new Node();
        }
        trie = trie->child[word[i] - 'A'];
    }
    trie->isTerminal = true;
}