#include <iostream>
#include <cpr/cpr.h>
#include <string>
using namespace std;
int main(){
    cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/html"),
                               cpr::Header({{"Accept", "text/html"}}));
    string html = r.text;
    string tagBegin = "<h1>";
    string tagEnd = "</h1>";
    string header = html.substr(html.find(tagBegin) + tagBegin.size(), ((html.find(tagEnd))- html.find(tagBegin)) - tagBegin.size());
    cout << header;
    return 0;
}