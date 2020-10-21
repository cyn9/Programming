/* 
 * * * * * * * * * * * * * * * * *
 *	Substitution Cipher Program  *
 * * * * * * * * * * * * * * * * *
 */ 

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printAlphabet(void);
string createAlphabet(void);
string generateKey(void);
string encryptMessage(const string, const string, const string);
string decryptMessage(const string, const string, const string);

int main(void) {
	string alphabet = createAlphabet();
	string key = generateKey();

	string message {}, encMsg {}, decMsg {};

	cout << "Enter your message : ";
	getline(cin, message);

	cout << "\nEncrypting the message . . .\n" << endl;

	encMsg = encryptMessage(message, key, alphabet);

	cout << "Encrypted message is : ";
	cout << encMsg << endl;
	cout << endl;

	cout << "Decrypting the message . . .\n" << endl;

	decMsg = decryptMessage(encMsg, key, alphabet);

	cout << "Decrypted message is : ";
	cout << decMsg << endl;

	return 0;
}

void printAlphabet(void) {
	cout << "The Alphabets from A to Z are: \n"; 

    for (char i = 'A'; i <= 'Z'; i++) 
    	cout << i << " ";
 
	for (char i = 'a'; i <= 'z'; i++) 
    	cout << i << " ";

    cout << endl;
}

string createAlphabet(void) {
	string alphabet {};

	for (auto i = 'a'; i <= 'z'; i++)
		alphabet += i;

	for (auto i = 'A'; i <= 'Z'; i++)
		alphabet += i;

	return alphabet;
}

string generateKey(void) {
	string key = "XZNLWEBGJHQDYVTKFUOMPCIASR";

	string key_lower {key};
	transform(key_lower.begin(), key_lower.end(), key_lower.begin(), ::tolower);

	key += key_lower;

	return key;
}

string encryptMessage(const string msg, const string key, const string alphabet) {
	string encryptedMessage(msg.length(), ' ');
	int charPos {0};

	for (size_t i = 0; i < msg.length(); i++) {
		if (!isalpha(msg.at(i)))	encryptedMessage.at(i) = msg.at(i);
		else {
			charPos = alphabet.find(msg.at(i));
			encryptedMessage.at(i) = key.at(charPos);
		}
	}

	return encryptedMessage;
}

string decryptMessage(const string msg, const string key, const string alphabet) {
	string decryptedMessage(msg.length(), ' ');
	int charPos {0};

	for (size_t i = 0; i < msg.length(); i++) {
		if (!isalpha(msg.at(i)))	decryptedMessage.at(i) = msg.at(i);
		else {
			charPos = key.find(msg.at(i));
			decryptedMessage.at(i) = alphabet.at(charPos);
		}
	}

	return decryptedMessage;
}