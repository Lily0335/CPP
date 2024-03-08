#include<iostream>
using namespace std;
int temp;
int result;
int main(){
	
	
    int a;
    cout<<"1 .if you want to convert from celcius to farhenhiet :"<<endl;
    cout<<"2. if u want to convert from farenhiet to celcius:"<<endl;
    cout<<"enter your choice : ";
    cin>>a;
    cin.ignore(1000,'\n');
    while(1){
        if(cin.fail()){
            cout<<"invalid input :"<<endl;
            cout<<"enter a numeric value: ";
            cin.clear();
            cin.ignore(1000,'\n');
            system("cls");
           
        }
        if(!cin.fail()){
            break;
        }
    }
    switch(a){
        case 1:
        cout<<"Enter the temperature : ";
        cin>>temp;
        cin.ignore(1000,'\n');
          while(1){
         if(cin.fail()){
             cout<<"invalid input :"<<endl;
             cout<<"enter a numeric value: ";
             cin.clear();
             cin.ignore(1000,'\n');
         }
         if(!cin.fail()){
             break;
         }
     }
        result=(temp*9/5)+32;
        cout<<"the temp in farenhiet is: "<<result<<endl;
        break;


         case 2:
         cout<<"Enter the temp: "<<endl;
         cin>>temp;
         cin.ignore(1000,'\n');
         while(1){
         if(cin.fail()){
             cout<<"invalid input :"<<endl;
             cout<<"enter a numeric value: ";
             cin.clear();
             cin.ignore(1000,'\n');
             system("cls");
         }
         if(!cin.fail()){
             break;
         }
     }
         result=(temp-32)*5/9;
         cout<<"the temp in celcius is: "<<result<<endl;
        break;
        default:
        cout<<"enter with in the range"<<endl;
        cout<<"press enter to input"<<endl;

    }
   


    return 0;
}