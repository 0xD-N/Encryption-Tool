#include <iostream>

class Encrypt
{
    private:
        std::string strToEncrypt;
        std::string encryptedString;
        std::string decryptedString;
    
    public:
        Encrypt(std::string strToEncrypt);
        std::string getStrToEncrypt();
        std::string getEncryptedString();
        std::string getDecryptedString();
        void setStrToEncrypt(std::string);
        
};