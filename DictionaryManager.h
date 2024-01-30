#ifndef DICTIONARYMANAGER_H
#define DICTIONARYMANAGER_H

#include <map>
#include <string>
#include "Word.h"

class DictionaryManager {
private:
    std::map<std::string, std::string> dictionary;

public:
    DictionaryManager();
    void run();
    void addWord(const Word& word);
    void removeWord(const std::string& word);
    void editWord(const std::string& word, const std::string& newMeaning);
    void searchWord(const std::string& word) const;
    void readDictionaryFromFile(const std::string& filename);
    void writeDictionaryToFile(const std::string& filename) const;
};

#endif 
