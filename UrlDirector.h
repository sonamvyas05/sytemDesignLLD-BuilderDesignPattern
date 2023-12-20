#ifndef URLDIRECTOR_H
#define URLDIRECTOR_H
#include "UrlBuilder.h"

class UrlDirector{
    private: 
       UrlBuilder* urlBuilder1;
    public:
        UrlDirector(UrlBuilder* mUrlBuilder)
        {
            urlBuilder1 = mUrlBuilder;
        }

        URL* BuildUrl()
        {
            urlBuilder1->buildScheme();
            urlBuilder1->buildHost();
            urlBuilder1->buildPath();
            urlBuilder1->buildParameters();
            urlBuilder1->buildFragment();
            return urlBuilder1->getResult() ;
        } 
};


#endif