#include <iostream>
#include <cpr/cpr.h>
#include <string>

void getRequest(std::string& req){
    cpr::Response r;
    if (req == "put"){
        r = cpr::Put(cpr::Url("http://httpbin.org/" + req));
    }else if (req == "get"){
        r = cpr::Get(cpr::Url("http://httpbin.org/" + req));
    }else if (req == "delete"){
        r = cpr::Delete(cpr::Url("http://httpbin.org/" + req));
    }else if (req == "patch"){
        r = cpr::Patch(cpr::Url("http://httpbin.org/" + req));
    }else if (req == "post"){
        r = cpr::Post(cpr::Url("http://httpbin.org/" + req));
    }else {
        std::cout << "error request\n";
        return;
    }
    std::cout << r.text << std::endl;
}
int main() {
    std::string request;
    while (request != "exit") {
        std::cout << "Enter request \n";
        std::cin >> request;
        getRequest(request);
    }
    return 0;
}
