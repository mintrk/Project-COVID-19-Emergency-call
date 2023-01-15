class LL_patient{
      patient*head;
      int size;
public:
       void add_patient(patient*&);
       virtual void show_all();
       void call();
       void sortingpatient();
       ~LL_patient();
       LL_patient();
      
};