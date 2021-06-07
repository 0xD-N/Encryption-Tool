#include <iostream>
#include "includes/Encrypt.cpp"


int main() 
{

   Encrypt e("Enter string to encrypt here. Any string is acceptable and original length will be retained.");

   std::cout << "\nEncrypted: " << e.getEncryptedString() << "\n";
   std::cout << "Decrypted: " << e.getDecryptedString() << "\n";
   
   return 0;
}