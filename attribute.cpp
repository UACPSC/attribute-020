/*
    attribute.cpp

    Output an attribute
*/

#include <iostream>
#include <string>
#include <string_view>

int main(int argc, char* argv[]) {

    // require the attribute command-line argument
    if (argc < 2){
        std::cerr << "usage: " << argv[0] << " [attribute]" << '\n';
        return 1;
    }

    // attribute is the first command-line argument
    std::string attribute;
    attribute = argv[1];

    // output the attribute
    if (attribute != "") {
        std::cout << "Attribute: " << attribute << '\n';
    } else {
        attribute = "Empty";
        std::cout << "Attribute: " << attribute << '\n';
    }

    return 0;
}
