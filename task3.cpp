#include <iostream>
#include <cpr/cpr.h>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<vector<string>> request;
    string input;
    int countElement = 0;
    do{
        cout << "Enter element " << countElement + 1 << endl;
        request.emplace_back(vector<string>(2));
        for (int i = 0; i < 2; i++){
            if (request.back()[0] == "post" || request.back()[0] == "get") continue;
            cin >> request.back()[i];
        }
        countElement++;
    }while((request.back()[0] != "get") && (request.back()[0] != "post"));

    if (request.back()[0] == "get"){
        string ReqUrl = "http://httpbin.org/get?";
        auto& ReqEnd = request.back();
        vector<vector<string>>::iterator itReq = request.end();
        itReq -= 2;
        for (auto& VecReq : request){
            if (VecReq != request.back()) {
                ReqUrl += VecReq[0] + '=' + VecReq[1];
            }
        }
        cout << ReqUrl;
    }else if (request.back()[0] == "post"){

    }

    return 0;
}
