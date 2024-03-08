#include<iostream> 
#include<ctime> 
#include<cstdlib> 
#include<cctype> 
#include<string>

using namespace std;

bool validateString(string input) {

if(input.empty()) 
{ cout << "String cannot be empty"; 
   return false;      
   }

for(char c: input) 
{ if(!isalpha(c) && c != ' ') 
    { cout << "String can contain only alphabets and spaces";      
    return false;
   } 
   }

   return true; }

bool validateDigits(string input) {

if(input.empty()) 
{
     cout << "Input cannot be empty";     
     return false; }

if(input[0] == '0')    
{    
    cout << "First digit cannot be zero";  
    return false; }

for(char c: input) {

if(!isdigit(c)) {    
  cout << "Input can contain only digits";
  return false;
}
}

return true;   
}

int generateRandomRoll() {

srand(time(0));

int randomNumber = rand() % 9000 + 1000;

return randomNumber;
}

int main(){

string name, lastname, fathername, address, number;

do {    
    cout << "Enter name: ";  
   getline(cin, name);    
} while(!validateString(name));

do {   
    cout << "Enter lastname: ";    
    getline(cin, lastname);
} while(!validateString(lastname));

do {   
    cout << "Enter fathername: "; 
getline(cin, fathername);    
} while(!validateString(fathername));

cout << "Enter address: ";    
  getline(cin, address);

do { cout << "Enter phone number: ";   
getline(cin, number); }   
while(!validateDigits(number));

int roll = generateRandomRoll();

int birthYear, birthMonth, birthDay;

do { cout << "Enter birth year (1999 to 2023): "; 
   cin >> birthYear; 
   if(birthYear < 1999 || birthYear > 2023) 
{ 
    cout << "Invalid year. Enter again: "; 
    } 
    } while(birthYear < 1999 || birthYear > 2023);

do { 
    cout << "Enter birth month (1 to 12): "; 
    cin >> birthMonth; 
    if(birthMonth < 1 || birthMonth > 12) 
    { cout << "Invalid month. Enter again: "; 
    } 
    } 
    while(birthMonth < 1 || birthMonth > 12);

do { cout << "Enter birth day (1 to 31): "; 
cin >> birthDay; 
   if(birthDay < 1 || birthDay > 31) 
   { cout << "Invalid day. Enter again: "; 
   } 
} while(birthDay < 1 || birthDay > 31);

int age = 2024 - birthYear;

cout << "\n*****************************Student Details:**************************************\n"; 
cout << "Name:              " << name << endl; 
cout << "Last Name:         " << lastname << endl; 
cout << "Father's Name:     " << fathername << endl; 
cout << "Phone Number:      " << number << endl; 
cout << "Roll Number:       " << roll << endl; 
cout << "Age:               " << age << endl; 
cout << "Address:           " << address << endl;
cout<<"************************************************************************************";

return 0; 
}
