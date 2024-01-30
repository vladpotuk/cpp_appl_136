#ifndef WORD_H
#define WORD_H

#include <string>

class Word {
private:
    std::string word;
    std::string meaning;

public:
    Word(const std::string& w, const std::string& m);
    std::string getWord() const;
    std::string getMeaning() const;
};

#endif 

