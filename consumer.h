using namespace std;
class Consumer{
    friend class LL;
private:
    int callin, callout;
    Consumer * next;
public:
      Consumer(int, int); 
      Consumer();
      void show_Consumer();
      void call_Consumer();
      void func1422(int);
      void func1669(int);
      void func1330(int);
      int RASFcovid();
      void insert(Consumer*&);
      Consumer* move_next();
      ~Consumer();
};

