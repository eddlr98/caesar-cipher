// simple caesar cipher
// x=original value, n=shift amount
//  Encryption:    E(x) = (x + n) mod 26
//  Decryption:    D(x) = (x - n) mod 26
#include <iostream>
#include <string>

using namespace std;

string encrypt(string, int);

int main(int argc, char **argv)
{
    string msgIn;
    int shift;
          
    // get message to encrypt
    cout << "Please enter the phrase to encrypt: ";
    cin >> msgIn;
    // get shift amount
    cout << "Enter the shift amount (ex. 6 this means 6 letters to the right.): ";
    cin >> shift;   
    cout << "Encrypted message: " << encrypt(msgIn, shift) << "\n";

    return 0;    
}

string encrypt(string msg, int shift)
{
    // make sure the encrypted variable is empty.
    string msgOut = "";
    // iterate through message
    for(int i = 0; i < msg.length(); i++){
        // encrypt each character in string
        // For uppercase letters
        if(isupper(msg[i]))
            msgOut += char(int(msg[i] + shift - 65) % 26 + 65);
        // For lowercase letters
        else
            msgOut += char(int(msg[i] + shift - 97) % 26 + 97);
    }
    return msgOut;
}