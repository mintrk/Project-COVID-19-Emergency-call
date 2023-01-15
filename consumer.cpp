#include <iostream> 
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include "consumer.h"
#include "patient.h"
#include "LL_patient.h"
#include "LL.h"

using namespace std;

class inputint: public exception{

     virtual const char* what() const throw(){
     return "\t    Sorry, it’s not a number..."; 
     }

}inputii;

class inputstring: public exception{

     virtual const char* what() const throw(){
     return "\t    Sorry, please input string..."; 
     }

}inputss;

bool check_number(string str) {
   for (int i = 0; i < str.length(); i++)
   if (isdigit(str[i]) == false)
      return false;
      return true;
}

Consumer::Consumer(int a, int b){
    callin = a;
    callout = b;
    next = NULL;
    //cout<<"Calling...  "<< endl;
}

Consumer::Consumer(){
    callin = 987654321;
    callout = 1422;
    next = NULL;
}

Consumer::~Consumer(){
    cout<<"\t        destruct consumer"<<endl;
}

Consumer* Consumer::move_next(){
      return next;
}

void  Consumer:: show_Consumer(){

    cout<<endl;
    cout<<"\t  Outgoing call... "<<endl;
    cout<<"\t  Phone number : +66"<< callin <<endl;
    cout<<"\t  Callout : "<< callout <<endl;

}

void  Consumer:: call_Consumer(){
      cout<<"\n\t  ==== CLEAR SCREEN ===="<< endl;
      usleep(1200000);
      system("clear");
      cout<<"\t  Your number is +66"<< callin << endl;
      cout<<"\t  Outgoing call in progress"<< endl;
      usleep(1200000);
      cout<<"\t  ."<<endl;
      usleep(1200000);
      cout<<"\t  ."<<endl;
      usleep(1200000);
      cout<<"\t  ."<<endl;

      if(callout==1422){
        func1422(callin);

      }else if(callout==1669){
        func1669(callin);

      }else if(callout==1330){
        func1330(callin);

      }

}

void  Consumer:: func1422(int a){
  int choice1422;
  int check = 0;
  int risk = 3;
  char yesno[10];
  cout<<"\t  Calling to 1422... "<< endl;
  cout<<endl;
  usleep(1200000);
//Frequently asked questions
  do{
  cout<<"\t    =========  Frequently Asked Questions  =========  " <<endl;
  cout<<"\t    1. How can I prevent COVID-19?                    " <<endl;
  cout<<"\t    2. Am I infected with COVID-19 yet?               " <<endl;
  cout<<"\t    3. Can we check COVID-19 by yourself ?            " <<endl;
  cout<<"\t    4. Is hand sanitizer effective against COVID-19?  " <<endl;
  cout<<"\t    5. Am I at risk for serious complications from    " <<endl;
  cout<<"\t       COVID-19 if I smoke cigarettes?                " <<endl;
  cout<<"\t    6. Risk assessment for COVID-19                   " <<endl;
  cout<<"\t    ================================================  " <<endl;
  do{
    try{
  cout<<"\t    Input number between 1-6 "<< endl;
  cout<<"\t    >> ";
  cin>>choice1422;
  
  if(cin.fail()){//input wrong parameter
    throw inputii;
  }
  if(choice1422>6 || choice1422<1){
  cout<<"\t    That is not in the lists, please try again..."<< endl;
  }
  }catch(exception& e){
      //cout<<"blabla"<<endl;
      cout << e.what() << endl; 
      cin.clear();
      cin.ignore(1000,'\n');
  }
  }while(choice1422>6 || choice1422<1);

  //cout<<"  choice : "<< choice1422 << endl;
   if(choice1422 == 1){
     cout<<endl;
     cout<<"\t    Question : How can I prevent COVID-19? "<< endl;
     cout<<"\t    Answer   : The best way to prevent illness is to avoid being exposed "<< endl;
     cout<<"\t               to the virus. So we recommend everyday preventive actions "<< endl;
     cout<<"\t               such as wash your hands , cover your mouth and nose or    "<< endl;
     cout<<"\t               get the COVID-19 vaccine.                                 "<< endl;
     
   }else if(choice1422 == 2){
     cout<<endl;
     cout<<"\t    Question : Am I infected with COVID yet? "<< endl;
     cout<<"\t    Answer   : The most common symptoms of COVID-19 are dry cough, tiredness    "<< endl;
     cout<<"\t               and fever.The best way to confirm if you have the virus producing"<< endl;
     cout<<"\t               COVID-19 disease is with a laboratory test. Or you can do risk   "<< endl;
     cout<<"\t               assessment for COVID-19                                          "<< endl;

   }else if(choice1422 == 3){
     cout<<endl;
     cout<<"\t    Question : Can we check COVID-19 by yourself ?    "<<endl;
     cout<<"\t    Answer   : No, because reliable results must be performed at the designated  "<< endl;
     cout<<"\t               service point and sent to an accredited laboratory to have a      "<< endl;
     cout<<"\t               check. However, you should do the assessment for COVID-19 before, "<< endl;
     cout<<"\t               so as not to increase the burden on the doctor.                   "<< endl;

   }else if(choice1422 == 4){
     cout<<endl;
     cout<<"\t    Question : Is hand sanitizer effective against COVID-19?            "<<endl;
     cout<<"\t    Answer   : The best way to prevent the spread of infections and     "<< endl;
     cout<<"\t               decrease the risk of getting sick is by washing your     "<< endl;
     cout<<"\t               hands with plain soap and water for at least 20 seconds, "<< endl;
     cout<<"\t               you can also use an alcohol-based hand sanitizer         "<< endl;
     cout<<"\t               that contains at least 70% alcohol.                      "<< endl;

   }else if(choice1422 == 5){
     cout<<endl;
     cout<<"\t    Question : Am I at risk for serious complications from COVID-19       "<<endl;
     cout<<"\t               if I smoke cigarettes?                                     "<<endl;
     cout<<"\t    Answer   : Yes. Data shows that when compared to never smokers,       "<<endl;
     cout<<"\t               cigarette smoking increases the risk of more severe        "<<endl;
     cout<<"\t               illness from COVID-19, which could result in               "<<endl;
     cout<<"\t               hospitalization, the need for intensive care, or even death. "<<endl;
   }else if(choice1422 == 6){
     cout<<endl;
     cout<<"\t    Connecting to Risk assessment for COVID-19  "<<endl;//RASFcovid();
     
     usleep(1200000);
     cout<<"\t    ."<<endl;
     usleep(1200000);
     cout<<"\t    ."<<endl;
     usleep(1200000);
     cout<<"\t    ."<<endl;
     
     risk = RASFcovid();
     // perm function dee kwaa
    
     }
    do{
    cout<<endl;
    cout<<"\t    Do you want to ask more question? "<< endl;
    cout<<"\t    [Y/N]";
    cout<<"  >> ";
    cin>> yesno ;
      if(strcmp(yesno,"Y")==0||strcmp(yesno,"y")==0){
          check = 1;
       }else if(strcmp(yesno,"N")==0||strcmp(yesno,"n")==0){
          check = 2;  
       }else{
          check=0;
         cout<<"\t   Please input N or Y to continue.."<<endl;
       }
      cout<<endl;
    }while(check==0);

  }while(check==1);
  cout<<"\t  \t     ===== END CALL =====   "<<endl;
}
//cout<<" "<<endl;
//Risk assessment for COVID-19

int Consumer:: RASFcovid(){
    char yesno[10];
    int check=0;
    int count=0;
    string province;
    string district;  
    char gender[10]; ///
    int age;
    int cachoice=0;
    int r, stringcheck = 0;
    cout<<"\t    ======== Risk assessment for COVID-19 ======== "<<endl;
    cout<<"\t    PART 1 : General information "<<endl;
    do{
      try{
    cout<<"\t    Province    : ";
    cin>>province;
    if(check_number(province)!=0){
              throw inputss;
            }
    cout<<"\t    District    : ";
    cin>>district;
    if(check_number(district)!=0){
              throw inputss;
            }
            stringcheck=2;
      }catch(exception& e){
          stringcheck=1;
          cout << e.what() << endl; 
          cin.clear();
          cin.ignore(1000,'\n');
      }  
    }while(stringcheck==1); ///
    do{
    cout<<"\t    Gender[F/M] : ";
    cin>> gender ;
      if(strcmp(gender,"M")==0||strcmp(gender,"m")==0){
          check = 1;
       }else if(strcmp(gender,"F")==0||strcmp(gender,"f")==0){
          check = 2;  
       }else{
         check=0;
       }
       //cout<<"gender : "<<gender<<endl;
    }while(check==0);

    check=0;
    cout<<"\t    Career      : " << endl;
    cout<<"\t    \tPublic health personnel         [1]" << endl;
    cout<<"\t    \tAssociated in COVID-19 project  [2]" << endl;
    cout<<"\t    \tOther                           [3]" << endl;
    do{
      try{
      cout << "\t    Your choice: ";
      cin >> cachoice; 
      if(cin.fail()){
      throw inputii;
      }
    }catch(exception& e){
          cout << e.what() << endl; 
          cin.clear();
          cin.ignore(1000,'\n');
      } 

    }while(cachoice>4||cachoice<1);

    cout<<"\t    PART 2 : In the 14 days prior to illness onset, did you have any      "<<endl;
    cout<<"\t             of the following exposures                                   "<<endl;
    cout<<"\t    [1] Travel to the countries or an area with COVID-19 outbreak         "<<endl;
    do{
    cout<<"\t    [Y/N]";
    cout<<"  >> ";
    cin>> yesno ;
      if(strcmp(yesno,"Y")==0||strcmp(yesno,"y")==0){
          check = 1;
          count++;
       }else if(strcmp(yesno,"N")==0||strcmp(yesno,"n")==0){
          check = 2;  
       }
    }while(check==0);
    check = 0;
    cout<<"\t    [2] Close contact with a foreigner who traveled from the countries    "<<endl;
    cout<<"\t        with COVID-19 outbreak                                            "<<endl;
    do{
    cout<<"\t    [Y/N]";
    cout<<"  >> ";
    cin>> yesno ;
      if(strcmp(yesno,"Y")==0||strcmp(yesno,"y")==0){
          check = 1;
          count++;
       }else if(strcmp(yesno,"N")==0||strcmp(yesno,"n")==0){
          check = 2;  
       }
    }while(check==0);
    check = 0;
    cout<<"\t    [3] Close contact with a person with symptomatic laboratory-confirmed "<<endl;
    cout<<"\t        COVID-19 infection                                                "<<endl;
    do{
    cout<<"\t    [Y/N]";
    cout<<"  >> ";
    cin>> yesno ;
      if(strcmp(yesno,"Y")==0||strcmp(yesno,"y")==0){
          check = 1;
          count++;
       }else if(strcmp(yesno,"N")==0||strcmp(yesno,"n")==0){
          check = 2;  
       }
    }while(check==0);
    check = 0;
    cout<<"\t    [4] Stayed with family members or roommates who just traveled from    "<<endl;
    cout<<"\t        the countries with COVID-19 outbreak                              "<<endl;
    do{
    cout<<"\t    [Y/N]";
    cout<<"  >> ";
    cin>> yesno ;
      if(strcmp(yesno,"Y")==0||strcmp(yesno,"y")==0){
          check = 1;
          count++;
       }else if(strcmp(yesno,"N")==0||strcmp(yesno,"n")==0){
          check = 2;  
       }
    }while(check==0);
    check = 0;
    //cout<<"count = "<< count <<endl;
    int symptoms = 10;
    
      
    cout<<"\t    PART 3 : Do you have any of the following symptoms?    "<<endl;
    cout<<"\t             Cough, Sore throat, Stuffy nose, Runny nose   "<<endl;
    cout<<"\t             Difficult breathing, Body temparature >= 37.5 "<<endl;
    cout<<"\t    Ex. have only cough input 1                            "<<endl;
    do{
      try{
      //cout<<" Symptoms = "<<symptoms<<endl;
      cout<<"\t    How many symtoms >> ";
      cin>>symptoms;
    if(cin.fail()){
      symptoms=10;
      //cout<<" Symptoms = "<<symptoms<<endl;
      throw inputii;
      }
    }catch(exception& e){
          cin.clear();
          cin.ignore(1000,'\n');
          cout << e.what() << endl; 
      }
      //cout<<" Symptoms = "<<symptoms<<endl;
    }while(symptoms>6||symptoms<0);
    while(symptoms!=10){
    //cout<<"symptoms = "<< symptoms <<endl;
    int risk = 0;
    risk = symptoms+count;
    cout<<"\t    Your result was";
    symptoms=10;
    if(risk!=0){
        if(risk>=5){
          cout<<" Most risky"<<endl;
          r = 2;
        }else{
          cout<<" Less risky"<<endl;
          r = 1;
        }
    }else{
      cout<<" You're safe"<<endl;
      r = 0;
    }

  }
  return r;
}


void  Consumer:: func1669(int a){
  cout<<"\t  Calling to 1669... "<< endl; 

  cout<<endl;
  usleep(1200000);

  cout<<"\t    ==============   1669 CALL CENTER   ==============  " <<endl;
  cout<<"\t    You has been tested for COVID infection and would   " <<endl;
  cout<<"\t    like to contact for treatment.                      " <<endl;
  cout<<"\t                                                        " <<endl;
  cout<<"\t    You need to provide these information below...      " <<endl;
  cout<<"\t    ==================================================  " <<endl;

  cout<<"\t    < Input your general information and prepare your test result >  " <<endl;

  //how many people
  //construct patient 
  //cout<<" ";
  Consumer * A;
  string fname, sname;
  //string gender; ///
  int age;
  string nationalID;
  int phonenumber;
  //address
  string province, district, subdistrict,houseno;
  int postcode;

  patient * t;
  LL_patient B;

  int size=0,check=0;
  char yesno[10];
  char gender[1];

  do{
  do{
    try{
  cout<<"\t    First name   : ";
  cin>>fname;
  if(check_number(fname)!=0){
              throw inputss;
            }
  cout<<"\t    Surname      : ";
  cin>>sname;
  if(check_number(sname)!=0){
              throw inputss;
            }
  do{
  cout<<"\t    Gender[F/M]  : "; ///
  cin >> gender;
  }while(strcmp(gender,"F")!=0 && strcmp(gender,"M")!=0 && strcmp(gender,"f")!=0 && strcmp(gender,"m")!=0);
  cout<<"\t    Age          : ";
  while(!(cin >> age))
  {
    cout<<"\t    Non integer value entered!" << endl;
    cin.clear();
    cin.ignore(40,'\n');
    cout<<"\t    Age          : ";
  }
  cout<<"\t    National ID  : ";
  cin>>nationalID;
  
  cout<<"\t    Phone number : ";
  while(!(cin >> phonenumber))
  {
    cout<<"\t    Non integer value entered! or more than 10 digits" << endl;
    cin.clear();
    cin.ignore(40,'\n');
    cout<<"\t    Phone number : ";
  }
  check=0;
  }catch(exception& e){
        check=1;
        cout << e.what() << endl; 
        cin.clear();
        cin.ignore(1000,'\n');
    }
    }while(check==1);
  cout<<"\t    Currnet address "<<endl;
  do{
    try{
  cout<<"\t     - Province : ";
  cin>>province;
  if(check_number(province)!=0){
              throw inputss;
            }
  cout<<"\t     - District : ";
  cin>>district;
  if(check_number(district)!=0){
              throw inputss;
            }
  cout<<"\t     - Sub-district : ";
  cin>>subdistrict;
  if(check_number(subdistrict)!=0){
              throw inputss;
            }
  cout<<"\t     - House No.    : ";
  cin>>houseno;
  cout<<"\t     - Postcode : ";
  while(!(cin >> postcode))
  {
    cout<<"\t    Non integer value entered!" << endl;
    cin.clear();
    cin.ignore(40,'\n');
    cout<<"\t     - Postcode : ";
  }
  check=0;
  cout<<" "<<endl;
    }catch(exception& e){
          check=1;
          cout << e.what() << endl; 
          cin.clear();
          cin.ignore(1000,'\n');
    }
  }while(check==1);
  check=0;
  t = new patient(fname,sname,gender,age,nationalID,phonenumber,province,district,subdistrict,houseno,postcode);

  B.add_patient(t);
  cout<<" "<<endl;
  B.sortingpatient();
  cout<<" "<<endl;
  B.show_all();//virtual
  cout<<" "<<endl;

  cin.clear();
  cin.ignore(1000,'\n');
  cout<<"\t  Do you want to add more patient?"<<endl;
  do{
    cout<<"\t    [Y/N]";
    cout<<" >> ";
    cin>> yesno ;
      if(strcmp(yesno,"Y")==0||strcmp(yesno,"y")==0){
          check = 1;
       }else if(strcmp(yesno,"N")==0||strcmp(yesno,"n")==0){
          check = 2;  
       }else{
         cout<<"\t   Please input N or Y to continue.."<<endl;
       }
    }while(check==0);
    

  }while(check==1); 

    
    cout<<" "<<endl;
    
  
  cout<<"\t  \t     ===== END CALL =====   "<<endl;
}

void  Consumer:: func1330(int a){
  cout<<"\t  Calling to 1330... "<< endl;
  cout<<endl;
  usleep(1200000);
  string natioid;
  int age;
  int check=0;
  char yesno[10];

  do{
  cout<<"\t    Input information to check your privilege"<<endl;
  cout<<"\t    National ID :";
  cin>>natioid;
  cout<<"\t    Age         :";
  cin>>age;
  //natioid= natioid/20;

  srand((unsigned)time(0)); 
    int i=0;
    i = (rand()%8)+1; 
    //cout << i << "\n"; 
  if(i==1){
    cout<<"\t    Sorry, your privilege is not updated please try again later..."<<endl;
  }else if(i!=1){
    if(age<20){
        cout<<"\t    Privilege : National health insurance"<<endl;
        cout<<"\t    Hospital  : Any hospital near your current address"<<endl;
      }else if(age>=20){
        cout<<"\t    Privilege : Government Or State Enterprise Officer"<<endl;
        cout<<"\t    Hospital  : Public hospital"<<endl;
      }
  }

  do{
    cin.clear();
    cin.ignore(1000,'\n');
    cout<<"  \t    Do you want to check again? "<< endl;
    cout<<"  \t    [Y/N]";
    cout<<"  >> ";
    cin>> yesno ;
      if(strcmp(yesno,"Y")==0||strcmp(yesno,"y")==0){
          check = 1;
       }else if(strcmp(yesno,"N")==0||strcmp(yesno,"n")==0){
          check = 2;  
       }else{
         cout<<"\t      Please input N or Y to continue.."<<endl;
         check=0;
       }
    }while(check==0);

  }while(check==1);
  cout<<"\t  \t     ===== END CALL =====   "<<endl;
}

void Consumer::insert(Consumer*& x){
     x->next=this; //t->next=hol;
}