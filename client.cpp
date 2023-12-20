#include "HttpUrlBuilder.h"
#include "UrlDirector.h"
#include "URL.h"

int main()
{
    HttpUrlBuilder* httpUrlBuilder = new HttpUrlBuilder();
    UrlDirector* director1 = new UrlDirector(httpUrlBuilder);
    URL* url1 = director1->BuildUrl();
    std::cout<<"constructed URl: " << url1->toString() << std::endl;
    return 0;

}