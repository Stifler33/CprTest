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
        cout << "Enter element " << countElement << endl;
        request.emplace_back(vector<string>(2));
        for (int i = 0; i < 2; i++){
            if (request.back()[0] == "post" || request.back()[0] == "get") continue;
            cin >> request.back()[i];
        }
        countElement++;
    }while((request.back()[0] != "get") && (request.back()[0] != "post"));
    return 0;
}
