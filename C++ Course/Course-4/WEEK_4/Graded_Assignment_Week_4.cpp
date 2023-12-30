//Exercise-1

#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;

//add definitions below this line
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;

//add definitions below this line
class Hello{
  public:
   void PrintHello(){
    cout<<"Hello"<<endl;
   }
};   
//add definitions above this line

#endif


//add definitions above this line

#endif


//Exercise-2

#include <iostream>
using namespace std;

//add definitions below this line
enum seasons{winter=1, spring, summer, fall};

//add definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  seasons season1 = winter;
  seasons season2 = spring;
  seasons season3 = summer;
  seasons season4 = fall;

  cout << "Winter is the " << season1 << "st season of the year." << endl;
  cout << "Spring is the " << season2 << "nd season of the year." << endl;
  cout << "Summer is the " << season3 << "rd season of the year." << endl;
  cout << "Fall is the " << season4 << "th season of the year." << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}



//Exercise-3

#include <iostream>
using namespace std;

//add definitions below this line
struct Student{
  string name;
  int age;
  string major;
  
  Student(){
    name="Amy";
    age=18;
    major="Physics";
    

  }
};

//add definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Student amy;
  cout << amy.name << endl;
  cout << amy.age << endl;
  cout << amy.major << endl;
  
  cout << endl;
  
  Student adam;
  adam.name = "Adam";
  adam.age = 19;
  adam.major = "Computer Science";
  cout << adam.name << endl;
  cout << adam.age << endl;
  cout << adam.major << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}



//Exercise-4

#include <iostream>
using namespace std;

//add definitions below this line
class Person {
  public:
    static string name;
  
    static string GetName() {
      return name;
    }
};
//add definitions above this line

//DO NOT EDIT code below this line

string Person::name = "Name";

int main() {
  
  Person::name = "Peter Parker";
  cout << Person::GetName() << endl;
  Person::name = "Tony Stark";
  cout << Person::GetName() << endl;
  
  return 0;
  
}

//DO NOT EDIT code above this line


//Exercise-5

#include <iostream>
using namespace std;

//DO NOT EDIT/////////////////////
class Student {                 //
  public:                       //
    Student(string n, int id) { //
      name = n;                 //
      student_id = id;          //
    }                           //
//////////////////////////////////
  
  //add definitions below this line
     static bool CompareStudents(Student s1, Student s2) {
      if ((s1.name == s2.name) &&
          (s1.student_id == s2.student_id)) {
        return true;
      }
      else {
        return false;
      }
    } 

  
  //add definitions above this line
  
//DO NOT EDIT/////////
  private:          //
    string name;    //
    int student_id; //
};                  //
//////////////////////

int main() {
  
  //DO NOT EDIT code below this line

  Student andy("Andy Ace", 123456);
  Student anderson("Anderson Ace", 123456);
  Student ace("Andy Ace", 123456);
  Student andrew("Andy Ace", 234567);
  cout << boolalpha;
  cout << Student::CompareStudents(andy, anderson) << endl;
  cout << Student::CompareStudents(andy, ace) << endl;
  cout << Student::CompareStudents(andy, andrew) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
