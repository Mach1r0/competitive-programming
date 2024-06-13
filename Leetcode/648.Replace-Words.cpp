#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        sort(dictionary.begin(), dictionary.end(), [](string &a, string &b){ return a.size() < b.size(); });
        stringstream ss(sentence);
        string word, result;
        while (ss >> word) {
            for (const auto &root : dictionary) {
                if (word.substr(0, root.size()) == root) {
                    word = root;
                    break;
                }
            }
            result += word + " ";
        }
        result.pop_back(); 
        return result;
    }
};
