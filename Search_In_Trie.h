//
// Created by DhawalP on 16/10/23.
//
#include "Insert_in_Trie.h"
#ifndef TRIE_SEARCH_IN_TRIE_H
#define TRIE_SEARCH_IN_TRIE_H

#endif //TRIE_SEARCH_IN_TRIE_H
bool is_Present(Node* root,string word)
{
    int n = word.size();
    for(int i =0;i<word.size();i++)
    {
        if(root->child[word[i]-'A'] == NULL) return false;
        root = root->child[word[i] -'A'];
    }
    if(root->isTerminal) return true;
    else return false;
}