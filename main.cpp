#include "Search_In_Trie.h"
int main() {
    vector<string> dict;
    dict.emplace_back("ARE");
    dict.emplace_back("ARSON");
    dict.emplace_back("YOU");
    dict.emplace_back("YOUR");
    dict.emplace_back("THE");
    dict.emplace_back("DO");
    dict.emplace_back("DOT");
    dict.emplace_back("NEW");
    dict.emplace_back("NEWS");
    auto root = new Node();
    for(const auto & i : dict)
    {
        add(i,root);
    }
    if(is_Present(root,"DOTO")) cout<<"Present";
    else cout<<"Not Present";
    return 0;
}
