#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string source = "Hello, Crypto";
    std::string output;
    for (const auto& character : source){
        if (0 == isalpha(character)){
            output.append(1, character);
            continue;
        }

        if ((tolower(character) - 'a') < 14) {
            //add 13
            output.append(1, character + 13);
        }

        else{
            output.append(1, character - 13);

        }
    }

    std::cout << "The encrypted messege is: "
              << output
              << std::endl;
    return 0;
}