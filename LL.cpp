#include <iostream>
#include "consumer.h"
#include "LL.h"
using namespace std;

LL::LL(){
    hol = NULL;
    tail = NULL;
    size = 0;
}

LL::~LL(){
  cout<< "\t       destructor linklisted consumer"<<endl;
}

void LL::add_Consumer(Consumer *&A){ 
  Consumer* t=A;
  t->next = NULL;
  if(hol==NULL){
    hol = t;
    tail = t;
  }else{
    //tail->insert(A);
    tail->next = t;
    tail = tail->next;
  }
  size++;
}

void LL::delete_all(){
    Consumer* t=hol;
    while(hol!=NULL){
      hol = t -> move_next();
      delete t;
      t = hol;
    }
}

void LL::show_all(){
     Consumer* t=hol;
     int i;
     for(i=0;i<size;i++){
          t->show_Consumer();
          t=t->move_next();
     }
}

void LL::call(){
    Consumer* t=hol;
    int i;
    for(i=0;i<size;i++){
        t->call_Consumer();
        t=t->move_next();
                 
    }

}


