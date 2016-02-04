#include <vector>
#include <string>
#include "main.h"

std::vector<std::string> split(std::string str, char splitter){
    std::vector<int> semicolons;
    std::vector<std::string> tokens;
    for(int i=0;i<str.length();i++){
        if(str[i]==splitter)
            semicolons.push_back(i);
    }
    for(int i=0;i<semicolons.size();i++){
        if(i==0)
            tokens.push_back(str.substr(0, semicolons[i]));
        else if(i==semicolons.size()-1){
            tokens.push_back(str.substr(semicolons[i]+1));
        }
        else
            tokens.push_back(str.substr(semicolons[i-1]+1, semicolons[i]-semicolons[i-1]-1));
    }
    return tokens;
}