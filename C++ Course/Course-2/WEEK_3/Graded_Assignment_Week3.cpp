//EXERCISE-1

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

char first_letter=my_string[0];
char last_letter=my_string.at(my_string.length()-1);
cout<< first_letter<<" is the first character and "<<last_letter<<" is the last character";

  //add code above this line
  
  return 0;
  
}





//EXERCISE-2

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
int n= my_string.length();
int N = n-1;
for(int i=0; i<n; i++){
  for (int j=0;j<n;j++){
    if (j==N){
      cout<<my_string<<endl;
    }
    else{
      cout<<my_string;
    }
  }
}

  //add code above this line
  
  return 0;
  
}





     
//EXERCISE-3

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string original = (argv[1]);
  string modified;
  char ch;
  
  //add code below this line
int N=original.length();
for(char ch: original){
  if(isupper(ch)){
    modified+='u';}
  else if (islower(ch)){
    modified+='l';}
  else{
    modified+='-';
  }
} 
cout<<original<<endl;
cout<<modified;

  //add code above this line
  
  return 0;
  
}




//EXERCISE-4

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
int middle=my_string.length()/2;

cout<< my_string.substr(0,middle)<<endl;
cout<<my_string.substr(middle)<<endl;
  //add code above this line
  
  return 0;
  
}






//EXERCISE-5

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

char temp;
char temp2;
temp=my_string[0];
my_string[0]=my_string[1];
my_string[1]=temp;
temp2=my_string[2];
my_string[2]=my_string[3];
my_string[3]=temp2;

cout<<my_string<<endl;

for (int i = 0; i < my_string.length(); i++) {
  if (i % 2 == 0) {
    cout << my_string.at(i + 1);
  }
  else {
    cout << my_string.at(i - 1);
  }
}


  //add code above this line
  
  return 0;
  
}
