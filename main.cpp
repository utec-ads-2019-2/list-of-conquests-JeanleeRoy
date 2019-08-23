#include <iostream>
#include <map>

using namespace std;

string getFirstWord(string);

int main(int argc, char *argv[]) {
    int quant;
    string line, word;
    map<string,int> map;
    std::map<string,int>::iterator it;
    getline (cin,line);
    quant = stoi(line);

    for (int i = 0; i < quant; i++) {
        getline (cin,line);
        word = getFirstWord(line);
        it = map.find(word);
        if (it == map.end())
            map.insert( pair<string,int>(word,1));
        else
            map[word]++;
    }
    for (auto i = map.begin(); i != map.end(); i++)
        cout << i->first << " " << i->second << endl;

    return 0;
}

string getFirstWord (string str){
    string word = "";
    for (auto x : str) {
        if (x != ' ')
            word += x;
        else
            return word;   
    }
}   
