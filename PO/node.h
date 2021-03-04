#include <string>
#include <vector>
struct node
{
    node(std::string value) : key(value.substr(0,2)), left(NULL), right(NULL) {
        data.push_back(value);
    }
    std::string key=""; //string 2 char
    std::vector<std::string> data;
    node *left;
    node *right;
};