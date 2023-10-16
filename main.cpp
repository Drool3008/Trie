#include "Insert_in_Trie.h"
int main() {
    vector<string> dict;
    dict.emplace_back("ARE");
    dict.emplace_back("ARSON");
    dict.emplace_back("YOU");
    dict.emplace_back("YOUR");
    dict.emplace_back("THE");
    auto root = new Node();
    for(const auto & i : dict)
    {
        add(i,root);
    }
    return 0;
}
