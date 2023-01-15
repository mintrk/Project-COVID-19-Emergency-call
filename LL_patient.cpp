#include <iostream>
#include "consumer.h"
#include "patient.h"
#include "LL_patient.h"
using namespace std;

LL_patient::LL_patient(){
    head= NULL;
    size = 0;
}

LL_patient::~LL_patient(){
  patient *t = head;
  int i=0;
  for(i=0; i<size; i++){
    t=head;
    head = t->move_next();
    delete t;
  }
  cout<< "\t       destructor linklisted patient"<<endl;
}

void LL_patient::add_patient(patient *&X){
  head->insert(X);
  head = X;
  size++;
}

void LL_patient::show_all(){
     patient* t=head;
     int i;
     for(i=0;i<size;i++){
          
          cout<<"\t         Patient No. "<< i+1 <<endl;
          t->show_patient();
          t=t->move_next();
     }
}

void LL_patient::sortingpatient()
{
    patient *t = head;
    head->sort(t, size);
    head = t;
}
