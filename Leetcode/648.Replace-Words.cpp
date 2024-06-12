#include<iostream>
#include<sstream>
#include<string>
#include<vector>
<<<<<<< HEAD
using namespace std;

int main(void) {
    string str; 
    string sentence; 
    stringstream ss(str);
    int a; 
    size_t pos = str.find(sentence);
    for (int i = 0; i < str.size(); i++){
        if (str == sentence){
            str.replace(pos, str.size(), sentece);
        }
    }
    cin >> str; 
    return 0;
}
=======
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
>>>>>>> 51fedbeeda10ecfddf0cf4b44da5487bcf0287a8
