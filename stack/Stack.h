#ifndef STACK_H
#define STACK_H
//const int LEN = 80 ; // default stack length

class Stack {
// Interface
  public:
    Stack(int size) {
      init(size); 
    }    //constructor  
    ~Stack() {
      delete[] s;
    }    //destructor 
  //  void init();
    int nitems();
    bool full();
    bool empty(); 
    void push(double c);
    double pop();
    void inspect();

  // Implementation
  private:
//    void init() {};
    void init(int size) {
      LEN = size;
      s = new double[size];
    }
    int LEN; 
    double* s ;
    int count ;

  
};
#endif