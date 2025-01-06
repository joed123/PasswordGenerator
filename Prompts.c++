#include <iostream>
#include <fstream>
#include "control.h"

using namespace std;


struct details {    
  string phrase;        
  string name;
  string encrypted;   
} myStructure;

int thescramblednumber(struct details myStructure){



cout << "made it into encrypter" << endl;;
cout << myStructure.phrase << endl;;

}


int main(){

ofstream myfile;
myfile.open ("Passwordsaver.txt");

int savefile;

cout << "What wold you like your passcode phrase to be?" << endl;
cin >> myStructure.phrase;

cout << "What are the first 5 letters of name of the site?" << endl;
cin >> myStructure.name;

cout << myStructure.phrase << endl;

cout << "Your encrypted password is: ";
cout << myStructure.encrypted << endl;

thescramblednumber(myStructure);

cout << "Would you like to save that to a file? (yes = 1 no = 0)" << endl;
cin >> savefile;

if (savefile == 1){

myfile << myStructure.encrypted << endl;

}

myfile.close();


return 0;

}
