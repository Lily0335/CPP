#include <iostream> 
#include <cctype>

using namespace std;

bool validateString(string input){

  if(input.empty()) {
    cout<<"Password cannot be empty\n";
    return false;
  }

  if(input.length() < 8){
    cout<<"Password must be at least 8 characters\n";
    return false;
  }

  bool hasDigit = false;
  bool hasLower = false; 
  bool hasUpper = false;

  for(char c: input) {

    if(c == ' ') {
      cout<<"Password cannot contain spaces\n";
      return false;
    }

    if(isdigit(c)) {
      hasDigit = true;
    }

    if(islower(c)) {
      hasLower = true;
    }

    if(isupper(c)) {
      hasUpper = true; 
    }

  }

  if(!hasDigit) {
    cout << "Password must contain at least one digit\n";
    cout<<"weak password"<<endl;
    return false;
  }

  if(!hasLower) {
    cout << "Password must contain at least one lowercase letter\n"<<endl;
    return false;
  }

  if(!hasUpper) {
    cout << "Password must contain at least one uppercase letter\n";
    cout<<"Weak password \n"<<endl;
    return false;
  }

  if(hasDigit && hasLower && hasUpper) {
    cout << "Strong Pasword\n";
  }
  else {
    cout << "Password is weak\n";
  }

  return true;

}

int main(){

  string password;
     cout<<"\n\n*********************** WELCOME TO PASSWORD CHECKER ********************************\n\n";

  do {
    cout << "Enter password: ";
    getline(cin, password); 
  } while (!validateString(password));
  cout<<"\n\n\n**********************************************************************************************\n\n";
  cout<<"Your password is:      "<<password<<endl;
  cout << "Your Password is checked\n";
  cout<<"\n\n*********************************************************************************************";
  return 0;

}