#include <iostream>
#include <string>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#include "consumer.h"
#include "patient.h"
#include "LL_patient.h"

patient::patient(string a,string b,char* c,int d,string e,int f,string g,string h,string i,string j,int k){
///
    fname = a;
    sname = b;
    gender = c[0];
    age = d;
    nationalID = e;
    phonenumber = f;
    province = g;
    district = h;
    subdistrict = i;
    houseno = j;
    postcode = k;
    nnn = NULL;
    ppp = NULL;
    
    cout<<"\t  Construct new patient.. "<< fname <<" "<< sname <<endl;

     //LL_patient B;
     //B.showall();
    //show_patient();
}

patient::patient(){
    fname = "Petch";
    sname = "Jingjing";
    gender = 'N';
    age = 19;
    nationalID = "1234567890112";
    phonenumber = 960532054;
    province = "Phuket";
    district = "na";
    subdistrict = "na";
    houseno = "342/1";
    postcode = 12000;
    nnn = NULL;
    ppp = NULL;
    
    cout<<"\t  Construct new patient.. "<< fname <<" "<< sname <<endl;
}

patient::~patient()
{
    cout << "\t  Your information have been sent to hospital" << endl;
    cout << "\t   All patient information have been removed" << endl;
    cout << "\t        destructor linklisted patient"<<endl;
}

void patient::insert(patient *&A)
{
    A->nnn = this;//this = calling func.
    if (A->nnn != NULL)
    {
        A->nnn->ppp = A;
    }
}

patient* patient::move_next(){
      return nnn;
}

void patient::show_patient(){
  cout << "\t    ===== Patient data =====" << endl;
  cout << "\t    Firstname : " << fname << endl;
  cout << "\t    Surname   : " << sname << endl;
  cout << "\t    Gender    : " << gender << endl;
  cout << "\t    Age       : " << age << endl;
  cout << "\t    ID        : " << nationalID << endl;
  cout << "\t    Phone No. : +66" << phonenumber << endl;
  cout << "\t    ======== Address =======" << endl;
  cout << "\t    Province     : " << province << endl;
  cout << "\t    District     : " << district << endl;
  cout << "\t    Sub-district : " << subdistrict << endl;
  cout << "\t    House No.    : " << houseno << endl;
  cout << "\t    Postcode     : " << postcode << endl;
  cout <<endl;
}

/*void patient::swap(int *a, patient *&b) {
patient *t;
  t=*a;
  *a=b;
  b=t;
}
*/
void patient::sort(patient *&A, int size)
{
  int swapped, i;
        patient *ptr1;
        patient *lptr = NULL;
        if (A == NULL)
            return;
        do
        {
            swapped = 0;
            ptr1 = A;
      
            while (ptr1->nnn != lptr)
            {
                if (ptr1->age < ptr1->nnn->age)
                {
                    //swap(ptr1, ptr1->nnn);
                    swap(ptr1->age, ptr1->nnn->age);
                    swap(ptr1->fname, ptr1->nnn->fname);
                    swap(ptr1->sname, ptr1->nnn->sname);
                    swap(ptr1->gender, ptr1->nnn->gender);
                    swap(ptr1->nationalID, ptr1->nnn->nationalID);
                    swap(ptr1->phonenumber, ptr1->nnn->phonenumber);
                    swap(ptr1->province, ptr1->nnn->province);
                    swap(ptr1->district, ptr1->nnn->district);
                    swap(ptr1->subdistrict, ptr1->nnn->subdistrict);
                    swap(ptr1->houseno, ptr1->nnn->houseno);
                    swap(ptr1->postcode, ptr1->nnn->postcode);

                    swapped = 1;
                }
                ptr1 = ptr1->nnn;
            }
            lptr = ptr1;
        }
        while (swapped);
}