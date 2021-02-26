/*====================================
*          Vector Integers
* ====================================*/

#include <iostream>

int main() {
  int c[10] = {14, 0, 13};
  
  c[5] = 30;
  c[7] = 40;
  c[8] = 50;

  for (int i = 0; i < 10; i++) {
    std::cout << "c[" << i << "] = " << c[i] << "\n";
  }  
  return 0;
}

/*====================================
*        Vector with Constant
* ====================================*/

#include <iostream>

const int NUM_ELEM = 10;

int main() {
  int c[NUM_ELEM];
  for (int i = 0; i < NUM_ELEM; i++) {
    c[i] = 2*i;
  }
  for (int i = 0; i < NUM_ELEM; i++) {
    std::cout << "c[" << i << "] = " << c[i] << "\n";
  }  
  return 0;
}

/*====================================
*        Dynamic Vector
* ====================================*/

#include <iostream>

int main() {
  int num_elem;
  std::cout << "Enter vector size: ";
  std::cin >> num_elem;
  
  int* c = new int[num_elem];
  
  for (int i = 0; i < num_elem; i++) {
    c[i] = 2*i;
  }
  for (int i = 0; i < num_elem; i++) {
    std::cout << "c[" << i << "] = " << c[i] << "\n";
  }

  delete [] c;
  
  return 0;
}

/*====================================
*        Pointers as Parameters
* ====================================*/

#include <iostream>

using namespace std;

void memory_allocating(int* p)
{
  p = new int;
  *p = 7;
}
void memory_modifying(int* p)
{
  *p = 8;
}
void reference(int*& p)
{
  p = new int;
  *p = 9;
}

int main()
{
  int a  = 1;
  int b  = 2;
  int c  = 3; 
  int* p1 = &a;
  int* p2 = &b;
  int* p3 = &c;

  cout <<"Before: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout <<"Before: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << endl;
  
  memory_allocating(p1); 
  memory_modifying(p2);
  reference(p3);  

  cout << "After: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout << "After: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << "After: "<< a <<" "<< b <<" "<< c << endl;

  return 0;
}

/*====================================
*      Vectors as Parameters
* ====================================*/

#include <iostream>

void modification_vector_syntax_1(int b[], int num_elem)
{
  for (int i = 0; i < num_elem; i++){
    b[i] = b[i] * 2;
  }
}

void modification_vector_syntax_2(int* b, int num_elem)
{
  for (int i = 0; i < num_elem; i++){
    b[i] = b[i] * 2;
  }
}

void vector_const_syntax_1(const int* b, int num_elem) 
{
  // Body without changing vector elements
}

void vector_const_syntax_2(const int b[], int num_elem) 
{
  // Body without changing vector elements
}


const int NUM_ELEM = 10;
int main()
{
  // Static Allocation
  int c[NUM_ELEM] = {1,2,3,4,5,6,7,8,9,10};

  // Dynamic Allocation
  int *d = new int[NUM_ELEM];
  for (int i = 0; i < NUM_ELEM; i++){
    d[i] = i + 1;
  }
  
  modification_vector_syntax_1(c, NUM_ELEM);
  modification_vector_syntax_2(c, NUM_ELEM);

  modification_vector_syntax_1(d, NUM_ELEM);
  modification_vector_syntax_2(d, NUM_ELEM);

  for (int i = 0; i < NUM_ELEM; i++){
    std::cout << i << " : " << c[i] << " , " << d[i] << std::endl;
  }
  return 0;
}
