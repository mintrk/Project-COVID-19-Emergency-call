#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <string>
#include "exception.h"
#include "consumer.h"
#include "patient.h"
#include "LL.h"
#include "LL_patient.h"

using namespace std;

int main() {
int callin,callout,check = 2;

//MENU
cout<<"\t    ====================== CONTACTS ======================     "<<endl;
cout<<"\t      Lists                                Number"<<endl;
cout<<"\t      Department of Disease Control        1422"<<endl;
cout<<"\t      Medical Emergency Call               1669"<<endl;
cout<<"\t      Check treatment privilege            1330"<<endl;
cout<<"\t    ======================================================     "<<endl;
cout<<"\t PLEASE INPUT YOUR NUMBER AND NUMBER THAT YOU WANT TO CALL OUT "<<endl;
  cout<<"\t Example for input - 0987654321 1422 "<<endl;
  Consumer *test = new Consumer();
  test->show_Consumer();
  cout<<endl;
  /*patient *testp = new patient();
  testp->show_patient();
  cout<<endl;*/
  
  LL A;//construct linklist

do{
  try{
cout<<"\t >> ";
cin>> callin >> callout;
cout<<"\n";

  if(cin.fail()){//input wrong parameter
    throw inputi;
  }
  if(callin == 1422 || callin == 1669 || callin == 1330){//cannot callin by this number
    throw callinfail;
  }
  if(callin == callout){//cannot callout same number
    throw samenumber;
  }
  if(callout != 1422 && callout != 1669 && callout != 1330){//not in the lists
   check = 0;
   cout<<"\t  This number is not in the lists"<< endl;
   cout<<"\t  Please enter new number \n";
   cin.clear();
   cin.ignore(1000,'\n');
   check = 2;
   //break;
  }else{
    //create consumer
    Consumer *t = new Consumer(callin, callout);

    A.add_Consumer(t);
    A.show_all();

    check = 3;

    while(check == 3){
    char yesno[1];
    cout<<endl;
    cout<<"\t  Do you want to make more call ? "<< endl;
    cout<<"\t  [Y/N]";
    cout<<" >> ";
    cin>> yesno ;
      
      if(strcmp(yesno,"Y")==0||strcmp(yesno,"y")==0){
        cout<<"\n";
        cout<<"\t PLEASE INPUT YOUR NUMBER AND NUMBER THAT YOU WANT TO CALL OUT "<<endl;
          check = 2;
       }else if(strcmp(yesno,"N")==0||strcmp(yesno,"n")==0){
          check = 1;  
       }else{
         cout<<"\t  Please input N or Y to continue.."<<endl;
       }
      
    }
  }
  }
      catch(exception& e){
        cout << e.what() << endl;
        check = 2; 
        cin.clear();
        cin.ignore(1000,'\n');
      }

}while(check == 2);
//Outgoing call func. >>>
A.call();

}