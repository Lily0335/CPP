#include<iostream>
 #include<ctime> 
 #include<cstdlib> 
 #include<cctype> 
 using namespace std;

bool validateDigits(string input) {

 //Check for empty string 
 if(input.empty()) 
 { cout << "Input cannot be empty"; 
 return false; 
 }

 //Check if first digit is zero
  if(input[0] == '0') 
  { cout << "First digit cannot be zero"; 
  return false; 
  }

   for(char c: input) {

// Check if character is not a digit
   if(!isdigit(c)) {   
  cout << "Input can contain only digits";
  return false;
  }
 }
 int num = stoi(input);
  if (num < 1 || num > 10) {
    cout << "Number must be between 1-10: ";
    return false;
  }

  return true;
}


int main() {

  srand(time(0)); 
  string num;
  string prize_names[] = {
    "a watch",
	"a art kit ",
	"a trip to murree",
	"a chocolate",
    "a price money of $10000",
	"a spa ticket",
    "a cricket match ticket",
	"a salon free package",
	"a a book",
    "a free kashmir trip"
  };


        cout<<"****************** WELCOME TO PRIZE DISTRIBUTER SYSTEM! *******************\n\n"<<endl;

         do{ 
		 cout<<"\n\nEnter the number of participants: "; 
        getline(cin, num);
		 }while(!validateDigits(num));
		 
	  cout << "\n******************** The prize pool contains the following prizes:****************************\n";
  for (int i = 0; i < 10; ++i) {
    cout << i + 1 << ". " << prize_names[i] << "\n";
  }
      cout << "\n***********************************************************************************************\n\n";
  cout << "\n*******************Randomly selected prizes:********************************\n";

     int numberOfWinners = stoi(num);

       for(int i=1; i<=numberOfWinners; i++){
             cout<<"Winner "<<i<<": \n";
     int randomNumber = rand() % 9 + 1;
    

switch(randomNumber) {
  case 1:
    cout<<"you win a watch"<<endl;
    break;
  case 2: 
    cout<<"you win a art kit"<<endl;
    break;
  case 3:
    cout<<"you win a trip to murree"<<endl;
    break; 
  case 4:
    cout<<"you win a chocolate"<<endl;
    break;
  case 5:
    cout<<"you win a spa ticket"<<endl;
    break;
  case 6:
    cout<<"you win a price money of $10000"<<endl;
    break;
  case 7:
    cout<<"you win a cricket match ticket"<<endl;
    break;
  case 8:
    cout<<"you win a salon free package"<<endl;
    break;
  case 9:
    cout<<"you win a book"<<endl;
    break;
  case 10:
    cout<<"you win a free kashmir trip"<<endl;
    break;

  default:
    cout<<"invalid";
    break;
}
}

return 0; 
}
