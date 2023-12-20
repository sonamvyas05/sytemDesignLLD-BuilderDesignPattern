#ifndef URL_H
#define URL_H
#include<iostream>
#include<string>
#include<sstream>

// product URL
class URL{
public:
    void setScheme(const std::string& schema)
    {
        scheme_ = schema;
    }
    
    void setHost(const std::string& host){
        host_ = host;
    }

    void setPath(const std::string& path)
    {
        path_ = path;
    }

    void addParameter(const std::string& key, const std::string& value)
    {
        parameters_ += key + "=" + value + "&";
    }
    void setFragment(const std::string& fragment)
    {
        fragment_ = fragment;
    }

    std::string toString() const{
        std:: stringstream url;
        url << scheme_ <<"://" << host_ << "/"<<path_;

        if(!parameters_.empty())
        {
            url<<"?" << parameters_;
        }

        if(!fragment_.empty())
         {
            url<<"#"<< fragment_;
         }
         return url.str();
    }
    private:
       std:: string scheme_;
       std:: string host_;
       std:: string path_;
       std:: string parameters_;
       std:: string fragment_;
};
#endif 