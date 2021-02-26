/*====================================
*          Hello World
* ====================================*/

#include <iostream>

int main() {
    std::cout << "Hello World <3" << std::endl;
    return 0;
}

/*====================================
*           Integer Operations
* ====================================*/

#include <iostream>

int main() {
  int number1;
  int number2;

  std::cout << "Digite o primeiro número: ";
  std::cin >> number1;
  std::cout << "Digite o segundo número: ";
  std::cin >> number2;

  int   sum  = number1 + number2;
  int   sub  = number1 - number2;
  int   mul  = number1 * number2;
  int   div  = number1 / number2;
  float fdiv = (float)number1 / (float)number2;
  int   res  = number1 % number2;

  std::cout << "Soma:            " << sum << std::endl;
  std::cout << "Subtração:       " << sub << std::endl;
  std::cout << "Multiplicação:   " << mul << std::endl;
  std::cout << "Divisão Inteira: " << div << std::endl;
  std::cout << "Divisão Real:    " << fdiv << std::endl;
  std::cout << "Resto:           " << res << std::endl;

  return 0;
}

/*====================================
*         Comparison of Integers
* ====================================*/

#include <iostream>

using std::cout;

int main() {
  int number1;
  int number2;

  cout << "Digite o primeiro número: ";
  std::cin >> number1;
  cout << "Digite o segundo número: ";
  std::cin >> number2;

  if (number1 == number2)
    cout << number1 << " ==  " <<  number2 << std::endl;
  if (number1 != number2)
    cout << number1 << " !=  " <<  number2 << std::endl;
  if (number1 < number2)
    cout << number1 << " <  " <<  number2 << std::endl;
  if (number1 > number2)
    cout << number1 << " >  " <<  number2 << std::endl;

  if (number1 <= number2)
    cout << number1 << " <=  " <<  number2 << std::endl;;
  if (number1 >= number2)
    cout << number1 << " >=  " <<  number2 << std::endl;;

  return 0;
}

/*====================================
*         Integers lesser than five
* ====================================*/

#include <iostream>

using namespace std;

int main() {
  int number1;
  int counter = 0;
  int amount  = 0;
  
  while (counter < 10) {
  
    cout << "Digite um número (" << counter << ")" << endl;
    std::cin >> number1;

    if (number1 < 5) {
      amount++;
    }
    counter++;
  }

  cout << "Quantidade de Números Menores que 5: [" << amount <<  "]" << endl;
 
  return 0;
}

/*====================================
*      Sum of a series of integers
* ====================================*/

#include <iostream>

using namespace std;

int main() {
  int total;

  for (int number = 2; number <= 20; number += 2)
    total += number;

  cout << "A soma da série é " << total << endl;
 
  return 0;
}

/*====================================
*      Integers Average
* ====================================*/

#include <iostream>

using namespace std;

int main() {
  int count;
  int number;
  int sum;
  do {
    cout << "Insira um número: " << endl;
    cin >> number;
    
    sum += number;
    count++;
  }  while (number != 0);

  float average = (float)sum/(float)(count-1);
  cout << "A média da série é: " << average << endl;
 
  return 0;
}

/*====================================
*      Integers Average Variance
* ====================================*/

#include <iostream>

using namespace std;

int main() {

  int number;
  int valores[10];
  int sum = 0;
  
  for (int count = 0; count < 10; count++) {
  
    cout << "Insira um novo número: " << endl;
    cin >> number;
    
    sum += number;
    valores[count] = number;

  }  

  float average  = (float)sum/10.0;
  float variance = 0.0;
  
  for (int count = 0; count < 10; count++) {
    int   value  = valores[count];
    float term   = (float)value - average;
    variance    += term*term;
  }
  
  variance = variance /10;
  cout << "A média da série é: "     << average << endl;
  cout << "A variância da série é: " << variance << endl;
 
  return 0;
}

/*====================================
*      Integers Operations Functions
* ====================================*/

#include <iostream>

int sum(int number1, int number2){
  return number1 + number2;
}

int sub(int number1, int number2){
  return number1 - number2;
}

int mul(int number1, int number2){
  return number1 * number2;
}

int idiv(int number1, int number2){
  return number1 / number2;
}

float fdiv(int number1, int number2){
  return (float)number1 / (float)number2;
}

int res(int number1, int number2){
  return number1 % number2;
}

int main() {
  int number1;
  int number2;

  std::cout << "Digite o primeiro número: ";
  std::cin >> number1;

  std::cout << "Digite o segundo número: ";
  std::cin >> number2;

  std::cout << "Soma:            " << sum(number1, number2)  << std::endl;
  std::cout << "Subtração:       " << sub(number1, number2)  << std::endl;
  std::cout << "Multiplicação:   " << mul(number1, number2)  << std::endl;
  std::cout << "Divisão Inteira: " << idiv(number1, number2)  << std::endl;
  std::cout << "Divisão Real:    " << fdiv(number1, number2) << std::endl;
  std::cout << "Resto:           " << res(number1, number2)  << std::endl;

  return 0;
}

/*====================================
*      Parameters by Value
* ====================================*/

#include <iostream>
using namespace std;

void value_exchange(int a, int b){
        int temp;
        temp=a;
        a=b;
        b=temp;
}
int main(){
        int a=2, b=3;
        cout<<"Before: a = "<<a<<" b = " << b<<endl;
        value_exchange(a,b);
        cout<<"After: a = "<<a<<" b = "<< b << endl;   
        return 0;
}

/*====================================
*      Parameters by Reference
* ====================================*/

#include <iostream>
using namespace std;

void exchange_reference(int &a, int &b){
        int temp;
        temp=a;
        a=b;
        b=temp;
}
int main(){
        int a=2, b=3;
        cout<<"Before: a = "<<a<<" b = " << b<<endl;
        exchange_reference(a,b);
        cout<<"After: a = "<<a<<" b = "<< b << endl;   
        return 0;
}
