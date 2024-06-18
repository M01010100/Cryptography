#include <iostream>
#include <string>
#include <cctype>
using namespace std;

unsigned int checksum(string message){
    unsigned int checksum = 0;
    for (const auto& character : message) { 
        checksum += character;
    }
    return checksum;
}
int main() 
{
    string message = "Hello World" ;
    string Author = "By Matt T" ;
    string signed_message = message.append(Author);
    unsigned int cs = checksum(signed_message);
    
    string proof; 
    proof.append("checksum:");
    proof.append(to_string(cs));

    cout << "The proof is " << "'" <<  proof << "'" << endl;
    return 0;
    
}