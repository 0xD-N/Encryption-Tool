#include "encrypt.h"
#include <vector>

std::string encrypt(std::string strToEncrypt);
std::string decrypt(std::string strToDecrypt);

//Change key order to anything you desire. It must equal the length of value
std::vector<char> key {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0'};
std::vector<char> value {'a','q','z','x','s','w','e','d','c','v','f','r','4','5','6','3','2','7','1','9','8','0','t','g','b','n','h','y','u','j','m','k','i','o','l','p','P','O','I','K','L','U','J','M','Y','H','N','B','G','T','R','F','V','C','D','E','W','S','X','Q','Z','A'};


Encrypt::Encrypt(std::string strToEncrypt)
{
    this->strToEncrypt = strToEncrypt;
}

std::string Encrypt::getStrToEncrypt()
{
    return this->strToEncrypt;
}

std::string Encrypt::getEncryptedString()
{
    return encrypt(this->strToEncrypt);
}

std::string Encrypt::getDecryptedString()
{
    return decrypt(getEncryptedString());;
}

void Encrypt::setStrToEncrypt(std::string strToEncrypt)
{
    this->strToEncrypt = strToEncrypt;
}

std::string encrypt(std::string strToEncrypt) // David
{

    //f is key, e is value. Change to anything you desire. 
    std::string output {};

    for(int i = 0; i < strToEncrypt.length(); i++)
    {
        bool found;
        if(strToEncrypt.at(i) == ' ')
        {
            output += strToEncrypt.at(i);
            continue;
        }

        for(int j = 0; j < key.size(); j++)
        {
            found = false;
            if(strToEncrypt.at(i) == key.at(j))
            {
                found = true;
                output += value.at(j);
                break;
            }
            
        }

        if(!found)
        {
           output += strToEncrypt.at(i);
        }

    }
    return output;
}


std::string decrypt(std::string strToDecrypt)
{
    std::string output {};

    for(int i = 0; i < strToDecrypt.length(); i++)
    {
        bool found;
        if(strToDecrypt.at(i) == ' ')
        {
            output += strToDecrypt.at(i);
            continue;
        }
        for(int j = 0; j < value.size(); j++)
        {
            found = false;
            if(strToDecrypt.at(i) == value.at(j))
            {
                found = true;
                output += key.at(j);
                break;
            }
        }

        if(!found)
        {
            output += strToDecrypt.at(i);
        }
    }

    return output;

}

