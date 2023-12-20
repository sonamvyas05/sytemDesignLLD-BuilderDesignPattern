#ifndef HTTPURLBUILDER_H
#define HTTPURLBUILDER_H
#include "URL.h"
#include "UrlBuilder.h"

class HttpUrlBuilder : public UrlBuilder {
   public:
    ~HttpUrlBuilder(); 
    void buildScheme();
    void buildHost();
    void buildPath();
    void buildParameters();
    void  buildFragment();
    URL* getResult() const;
};

#endif // end of HTTPBUILDER_H
