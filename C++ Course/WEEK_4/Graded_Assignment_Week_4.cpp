//EXERCISE-1


////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

int main(int argc, char** argv) {
  
  TurtleScreen screen(400, 300); //You may edit the dimensions to fit your window
  Turtle tina(screen);
  tina.speed(TS_SLOWEST);
  
  //add code below this line
tina.pencolor({"black"});
tina.shape("indented triangle");
for (int i=0; i < 3; i++){
  tina.forward(100);
  tina.left(120);
}

  //add code above this line
  
  screen.exitonclick();
  return 0;
  
}







//EXERCISE-2

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string x = argv[1];
  
  //add code below this line
cin>> x;

for (int i=0; i<10; i++){

  cout<< x << endl;
}


  //add code above this line
  
  return 0;
  
}







//EXERCISE-3

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = stoi(argv[1]);
  int b = stoi(argv[2]);
  
  if (a > b) {
    int c = b;
    b = a;
    a = c;
  }
  
  //add code below this line
cin>>a;
cin>>b;
int sum=a;

for(int i=a; i<b; i++){
  sum=sum+(i+1);

}
cout<< sum << endl;

  //add code above this line
  
  return 0;
  
}





//EXERCISE-4

#include <iostream>
using namespace std;

int main() {

  for (int i = 100; i <= 100; i--) {
    if (i == 0) {
      cout << "Print me!" << endl;
      break;
    }
    else {
      while (true) {
        break;
        i++;
        cout << "Don't print me!" << endl;
        
      }
    }
  }

  return 0;

}









//EXERCISE-5

#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
for(int row= 0; row< 5; row++){
  for(int col=0; col<=3-row; col++){
    cout<< ".";
  }

  cout<< row+1 <<endl;
} 


  //add code above this line
  
  return 0;
  
}


