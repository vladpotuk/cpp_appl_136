#include "Word.h"

Word::Word(const std::string& w, const std::string& m) : word(w), meaning(m) {}

std::string Word::getWord() const {
    return word;
}

std::string Word::getMeaning() const {
    return meaning;
}
