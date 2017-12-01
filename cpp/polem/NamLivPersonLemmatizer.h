//
// Created by gkubon on 01/08/17.
//

#ifndef LEMATYZATOR_NAMLIVPERSONLEMMATIZER_H
#define LEMATYZATOR_NAMLIVPERSONLEMMATIZER_H

#include <string>
#include <vector>
#include <map>
#include <unicode/unistr.h>
#include "Inflection.h"

class NamLivPersonLemmatizer {

    std::vector<icu::UnicodeString> categories;
    std::vector<icu::UnicodeString> copyOrths;
    std::vector<icu::UnicodeString> forceSingleBases;
    std::vector<icu::UnicodeString> inflectionSeparators;
    std::vector<icu::UnicodeString> inflectionEndings;
    std::map<UnicodeString, std::vector<UnicodeString> > names;
    std::map<UnicodeString, UnicodeString> fullnames;


public:
    NamLivPersonLemmatizer(std::map<icu::UnicodeString,std::pair<icu::UnicodeString,icu::UnicodeString> > dictionaryItems,Inflection inflection);

    icu::UnicodeString
    lemmatize(std::vector <std::vector<icu::UnicodeString>> keyword, std::string category, bool debug);
    Inflection inflection;// = Inflection(std::vector<UnicodeString>());

};


#endif //LEMATYZATOR_NAMLIVPERSONLEMMATIZER_H