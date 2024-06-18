#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string message = "Hello World By Matt T";
    unsigned int checksum = 0;
    for (const auto& character : message) { 
        checksum += character;
    }
    cout << "The Checksum is: " << checksum << endl;

    return 0;
}