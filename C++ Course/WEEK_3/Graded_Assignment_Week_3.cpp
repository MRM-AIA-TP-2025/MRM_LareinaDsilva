//EXERCISE-1

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line

if ((x>=0 && x<=25) || (x>=75 && x<=100)){
  cout<< to_string(x)+" is between 0 and 25 or 75 and 100"<<endl;
}

  //add code above this line
  
  return 0;
  
}




//EXERCISE-2

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line

if (x%5==0){
cout<< to_string(x)+" is divisible by 5";
}
else{
cout<< to_string(x)+" is not divisible by 5";
}

  //add code above this line
  
  return 0;
  
}







//EXERCISE-3

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line

if ((x%5==0) && (x%2==0)){
cout<< to_string(x)+" is divisible by 5 and even";
}
else{
cout<< to_string(x)+" is not divisible by 5 or it is odd";
}

  //add code above this line
  
  return 0;
  
}






//EXERCISE-4

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line
int num;

if (x=="red"){
 num=1;
}
else if (x=="blue"){
 num=2;
}
else if (x=="yellow"){
 num=3;
}
else {
 num=4;
}

switch(num){
 case 1: cout << x+" is a primary color";
     break;
 case 2: cout<< x+" is a primary color";
     break;
 case 3: cout<< x+" is a primary color";
     break;
 default: cout<< x+" is not a primary color";
}

  //add code above this line
  
  return 0;
  
}






//EXERCISE-5

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line
int num;

if (x=="a"){
 num=1;
}
else if (x=="e") {
  num=2;
}
else if (x=="i"){
  num=3;
}
else if (x=="o"){
  num=4;
}
else if (x=="u"){
  num=5;
}
else {
  num=0;
}

switch (num){
  case 1: case 2:case 3: case 4:case 5: cout<< x+" is a vowel";
   break;
  default: cout<< x+" is not a vowel";
}
  //add code above this line
  
  return 0;
  
}
