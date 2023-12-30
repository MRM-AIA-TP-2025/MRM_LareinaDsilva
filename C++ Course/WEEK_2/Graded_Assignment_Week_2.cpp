//EXERCISE1:

#include <iostream>
using namespace std;

int main() {
  
  //fix the code below this line

  int a = 5;
  int b = 6;

  //fix the code above this line
  
  cout << (a * 3 + b - 8 / 2) << endl;
  
  return 0;
  
}




//EXERCISE-2

#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
cout<< boolalpha<< (5>=20)<<endl;

  //add code above this line
  
  return 0;
  
}


//EXERCISE -3

#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
string a= "Hello ";
string b="world";
cout<< a+b <<endl;

  //add code above this line
  
  return 0;
  
}




//EXERCISE-4

#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
double a = 7;
double b = 2;
cout << a/b << endl;

  //add code above this line
  
  return 0;
  
}



//EXERCISE-5


#include <iostream>
using namespace std;

int main() {
  
  string num1;
  string num2;
  cout << "Type the first whole number and then press Enter or Return: ";
  cin >> num1;
  cout << "Type the second whole number and then press Enter or Return: ";
  cin >>num2;
  
  //fix the code below this line

  int sum = stoi(num1) + stoi(num2);
  cout << ( num1 + " + " + num2 + " = " + to_string(sum) ) << endl;

  //fix the code above this line
  
  return 0;
  
}
