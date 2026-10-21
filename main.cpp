
#include <iostream>
using namespace std ;
//****the variables****//
int password =3333;
double  balance =10000;
double  deposit=0;
double  withdDrow=0;
int choice ;
//show is function to display menu of ATM//
void show (){
    cout <<"true password\n ";
    cout <<"----menu----\n ";
    cout <<"1-balance\n";
     cout <<"2-withdDrow\n";
    cout <<"3-deposit \n";
     cout <<"4-exit \n";
    
}

void process(){
    cout <<"Enter the password\n";
    cin >>password ;
    
 do{    
    if (password ==3333){
        
        cout <<"choice process from menu (1-4) \n";
        cin >>choice;
        
        
          switch (choice){
        case 1:
          cout <<"your balance is"<<balance<<endl;
          break;
        
        case 2:
          cout <<" your balance is "<<balance<< " enter the amount\n";
          cin >>withdDrow;
           if (withdDrow<balance){
               balance=balance-withdDrow;
               cout <<"true process,,\n Now your balance is "<<balance<<endl;
               
           }
           else {
               cout <<"sorry,,your balance is not enough\n";
          cout <<" your balance is " <<balance<< " enter the amount\n";
          cin >>withdDrow;
          balance=balance-withdDrow;
          cout <<"your current balance is"<<balance<<endl;
           }
          break;
            
        case 3 :
        cout <<"your current balance is"<<balance<<endl;
        cout <<"Enter your deposit money ::\n"; 
        cin >>deposit;
        balance+=deposit;
        cout <<"your current balance is "<<balance<<endl;
          break;
          
          
        case 4:
          cout <<"Thank you for using ATM\n ";
              
          }
          
       }  
      else {
        cout <<"wrong password \n";
        cout <<"Enter the password\n";
      cin >>password ;
    }
        
  }while(choice<4);
      
} 

int main()
{
    cout <<"******Welcome to ATM*******\n";
    show();
    process();
    
    return 0;
}