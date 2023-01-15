using namespace std;
class patient :public Consumer{
  //general info
  friend class LL_patient;
  string fname, sname;
  char gender;
  int age;
  string nationalID;
  int phonenumber;
  //address
  string province, district, subdistrict, houseno;
  int postcode;

  patient *nnn;//next
  patient *ppp;//prev

  public:
    patient(string,string,char*,int,string,int,string,string,string,string,int); ///
    patient();
    void show_patient();
    void insert(patient*&);
    void sort(patient *&, int);
    virtual patient* move_next();
    ~patient();

};
