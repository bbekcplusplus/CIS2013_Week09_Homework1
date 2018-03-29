#include <iostream>

#include <string>

using namespace std;
// a little bit help form Chegg Study (home / study / engineering / computer science / computer science questions and answers)

char CaeserEncrypt(int key,char);

char CaeserDecrypt(int key,char);

int main()

{
 string input;

     int key,ch;

     cout << "Enter the text" << endl;

     getline(cin, input);

     cout<<"Enter the value of key" << endl;

     cin>>key;

     cout<<"Enter your choice 1.Encryption 2.Decryption" << endl;

     cin>>ch;

     string output = "";

     switch(ch)

     {

     case 1:

          for(int i = 0; i < input.length(); i++)

          {

              output = output + CaeserEncrypt(key,input[i]);

          }

          cout << "Encrypted text is: " << output << endl;

          break;

     case 2:

          for(int i=0; i < input.length(); i++)

          {

              output = output + CaeserDecrypt(key,input[i]);

          }

          cout << "Decrypted text is: " << output << endl;

          break;

     }

     system("pause");

     return 0;

}

char CaeserEncrypt( int key,char c )

{

     if( isalpha(c) )

     {

          c = (((c-97)+key)%26)+97;

     }

     return c;

}

char CaeserDecrypt( int key,char c )

{

     if( isalpha(c) )

     {

          c = (((c-97)-3)%26)+97;

     }

     return c;

}