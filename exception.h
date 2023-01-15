#include <iostream>
#include <exception> 
using namespace std;

class inputchar: public exception{
     virtual const char* what() const throw(){
     return "\t  Sorry, it’s not N or Y..."; 
     }

}inputc;

class inputint: public exception{
     virtual const char* what() const throw(){
     return "\t  Sorry, it’s not a number..."; 
     }

}inputi;

class callinfail: public exception{
     virtual const char* what() const throw(){
     return "\t  Sorry, you cannot use that number to call \n\t  please try again..."; 
     }

}callinfail;

class failsame: public exception{
     virtual const char* what() const throw(){
     return "\t  Sorry, you cannot call out same number w/ your phone number \n\t  please try again..."; 
     }
}samenumber;
