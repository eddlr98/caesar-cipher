// simple caesar cipher
// x=original value, n=shift amount
//  Encryption:    E(x) = (x + n) mod 26
//  Decryption:    D(x) = (x - n) mod 26
#include <iostream>
#include <string>

using namespace std;

void encrypt();
void decrypt();

string encrypted;
string decrypted;
int shift;

int main(int argc, char **argv)
{
    char choice;
    char cont;
       
    do
    {
        cout << "Do you wish to encrypt or decrypt a message? (answer E or D): ";
        cin >> choice;
        if (choice == 'E')
        {
            encrypt();
            cout << "Do you wish to continue? (Y/N): ";
            cin >> cont;
        }
        else if (choice == 'D')
        {
            decrypt();
            cout << "Do you wish to continue? (Y/N): ";
            cin >> cont;
        }
        else
        {
            cout << "Error: incorrect option selected. Try again";
            cont == 'Y';
        }
    }while(cont == 'Y');    

    return 0;    
}

void encrypt()
{
    cout << "Please enter the phrase to encrypt: ";
    cin >> decrypted;

    cout << "Enter the shift amount (ex. 6 this means 6 letters to the right.): ";
    cin >> shift;
}

void decrypt()
{
    cout << "Please enter the phrase to decrypt: ";
    cin >> encrypted;

    cout << "Enter the shift amount (ex. 6R this means 6 letters to the right. 3L 3 to the left): ";
    cin >> shift;
}