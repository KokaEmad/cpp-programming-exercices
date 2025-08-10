#include <iostream>
using namespace std;

string readText ()
{
    cout << "Enter the text:\n";
    string text;
    getline(cin,text);
    return text;
}

string encryptText(string text, short  key )
{
    string encryptedText = "";
    for (char i : text) // range-based for loop
    {
        encryptedText += char(int(i) + key);
    }
    return encryptedText;
}

string decryptText(string text, short key)
{
    string decryptedText = "";
    for (char i : text) // range-based for loop
    {
        decryptedText += char(int(i) - key);
    }
    return decryptedText;
}

int main()
{
    string text = readText();
    short key;
    
    cout << "Enter the key for encryption: ";
    cin >> key;


    string encryptedText = encryptText(text, key);
    cout << "Encrypted Text: " << encryptedText << endl;

    string decryptedText = decryptText(encryptedText, key);
    cout << "Decrypted Text: " << decryptedText << endl;

    return 0;
}