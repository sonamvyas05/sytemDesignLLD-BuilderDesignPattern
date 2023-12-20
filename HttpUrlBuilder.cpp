#include "HttpUrlBuilder.h"

HttpUrlBuilder::~HttpUrlBuilder() {
    // Destructor definition
    delete url;
}

void HttpUrlBuilder :: buildScheme(){
    url->setScheme("https");
}

void HttpUrlBuilder :: buildHost(){
    url->setHost("www.mysite.com");
}

void HttpUrlBuilder :: buildPath(){
    url->setPath("path/to/resource");
}

void HttpUrlBuilder :: buildParameters(){
    url->addParameter("parm1","val1");
}

void HttpUrlBuilder :: buildFragment(){
    url->setFragment("section");
}

 URL* HttpUrlBuilder :: getResult() const{
    return url;
 }