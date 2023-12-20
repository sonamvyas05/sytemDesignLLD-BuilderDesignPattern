#ifndef URLBUILDER_H
#define URLBUILDER_H

#include "URL.h"

class UrlBuilder{
    protected:
       URL* url;
    public:
      //  virtual ~UrlBuilder() {}
       UrlBuilder()
       {
        url = new URL();
       }
      
      virtual void buildScheme() = 0;
      virtual void buildHost() = 0;
      virtual void buildPath() = 0;
      virtual void buildParameters() = 0;
      virtual void buildFragment() = 0;
      virtual URL* getResult() const = 0;

};
#endif // URLBUILDER