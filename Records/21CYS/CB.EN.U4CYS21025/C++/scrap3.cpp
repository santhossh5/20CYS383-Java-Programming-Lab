#include <iostream>
#include <string>

using namespace std;

// function to compute the encryption 
void encryptAffine() 
{ 
    string plainText;
    int a,b;
    cout<<"Enter key1 : ";
    cin>> a;
    cout<<"Enter key2 : ";
    cin>> b;
    cout<<"Enter plaintext : ";
    cin>> plainText;
    string cipherText = ""; 

    for (int i = 0; i < plainText.length(); i++) 
    { 
        // convert to uppercase 
        if (plainText[i] >= 'a' && plainText[i] <= 'z') 
        { 
            plainText[i] = plainText[i] - 32; 
        } 
  
        // Encryption formula 
        int x = (a * (plainText[i] - 65) + b) % 26; 
  
        // convert to lowercase 
        cipherText += (x + 65); 
    } 
  
    cout<<"Cipher text : "<<cipherText<<endl<<endl; 
} 
  
// function to compute the decryption 
void decryptAffine() 
{ 
    string cipherText;
    int a,b;
    cout<<"Enter key1 : ";
    cin>> a;
    cout<<"Enter key2 : ";
    cin>> b;
    cout<<"Enter Cipher text : ";
    cin>> cipherText;
    string plainText = ""; 
  
    // Calculating the modular inverse of a 
    int a_inv = 0; 
    int flag = 0; 
    for (int i = 0; i < 26; i++) 
    { 
        flag = (a * i) % 26; 
  
        // Check if (a*i)%26 == 1, then i will be the modular inverse of a 
        if (flag == 1) 
        { 
            a_inv = i; 
        } 
    } 

    // Decryption formula 
    for (int i = 0; i < cipherText.length(); i++) 
    { 
        // convert to uppercase 
        if (cipherText[i] >= 'a' && cipherText[i] <= 'z') 
        { 
            cipherText[i] = cipherText[i] - 32; 
        } 
  
        int x = (a_inv * (cipherText[i] + 65 - b)) % 26; 
  
        // convert to lowercase 
        plainText += (x + 65); 
    } 
  
    cout<<"Plain text : "<<plainText<<endl<<endl; 
} 
  
// Driver program to test the above functions 
int main() 
{ 
    //int a = 5, b = 8; 
    encryptAffine(); 
  
    decryptAffine(); 
  
    return 0; 
}







/*#include <iostream>
#include <string>
using namespace std;

void vigenere_encryption()
{
    string key, t;
    cout << "Enter pt : ";
    cin >> t;
    cout << "Enter key : ";
    cin >> key;
    string output, k;
    for (int i = 0; i < key.length(); ++i)
    {
        if (key[i] >= 'A' && key[i] <= 'Z')
        {
            k += key[i];
        }
        else if (key[i] >= 'a' && key[i] <= 'z')
        {
            k += key[i] + 'A' - 'a';
        }
    }
    for (int i = 0, j = 0; i < t.length(); ++i)
    {
        char c = t[i];
        if (c >= 'a' && c <= 'z')
            c += 'A' - 'a';
        else if (c < 'A' || c > 'Z')
            continue;
        output += char(((c + k[j]-130) % 26) + 'A'); // added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
        j = (j + 1) % k.length();
    }
    cout << output << endl;
}
void vigenere_decryption()
{
    string key, t;
    cout << "Enter ct : ";
    cin >> t;
    cout << "Enter key : ";
    cin >> key;
    string output, k;
    for (int i = 0; i < key.length(); ++i)
    {
        if (key[i] >= 'A' && key[i] <= 'Z')
            k += key[i];
        else if (key[i] >= 'a' && key[i] <= 'z')
            k += key[i] + 'A' - 'a';
    }
    for (int i = 0, j = 0; i < t.length(); ++i)
    {
        char c = t[i];
        if (c >= 'a' && c <= 'z')
            c += 'A' - 'a';
        else if (c < 'A' || c > 'Z')
            continue;
        output += (c - k[j] + 26) % 26 + 'A'; // added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
        j = (j + 1) % k.length();
    }
    cout << output << endl;
}

int main()
{
    encryption();
    return 0;
}
*/