//EXERCISE-1

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
int count=0;
int characters;
try {
  ifstream file;
  string read;
  file.open(path);
  if (!file) {
    throw runtime_error("File failed to open.");
  }
  while (getline(file, read)) {
      count++;
      characters+=read.length();
  }
  file.close();
  cout<< count<<" line(s)"<<endl;
  cout<< characters <<" character(s)";
}

catch (exception& e) {
  cerr << e.what() << endl;
}

  
  //add code above this line
  
  return 0;
  
}







//EXERCISE-2

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
vector<string> data;
try{
  ifstream file;
  string read;
  file.open(path);
  if (!file){
    throw runtime_error("File failed to open");
  }
  while (getline(file,read)){
    stringstream ss(read);
      while (getline(ss, read, ',')){
        data.push_back(read);
      }
  }
  file.close();
}
catch(exception& e){
  cerr<<e.what()<<endl;
}

int col1=0;
int col2=0;
int col3=0;
int col4=0;
for(int i=0; i<data.size(); i++){
  if(i==0|| i==4|| i==8){
    col1+=stoi(data.at(i));
  }
  if (i==1 || i==5|| i==9){
    col2+=stoi(data.at(i));
  }
  if (i==2|| i==6|| i==10){
    col3+= stoi(data.at(i));
  }
  if (i==3 || i==7 || i==11){
    col4+=stoi(data.at(i));
  }
  
}
cout<<col1/3<<" ";
cout<<col2/3<<" ";
cout<<col3/3<<" ";
cout<< col4/3;
  //add code above this line
  
  return 0;
  
}







//EXERCISE-3

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
vector <string> data;
  try{
    ifstream file;
    string read;
    file.open(path);
    if (!file){
      throw runtime_error("File failed to open");
    }
    while (getline(file,read)){
      stringstream ss(read);
      while (getline(ss,read)){
        data.push_back(read);
      }
    } 
    file.close();

}     
  

  catch (exception& e){
    cerr<<e.what()<<endl;

  }

  for (int i =data.size()-1; i>=0; i--){
    cout<<data.at(i)<<endl;
  }
  //add code above this line
  
  return 0;
  
}






//EXERCISE-4

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
vector <string> data;
  try{
    ifstream file;
    string read;
    file.open(path);
    if (!file){
      throw runtime_error("File failed to open");
    }
    while (getline(file,read)){
      stringstream ss(read);
      while (getline(ss,read, '\t')){
        data.push_back(read);
      }
    } 
    file.close();

}     
  

  catch (exception& e){
    cerr<<e.what()<<endl;

  }

  int maxage=0;
  string person;

  for(int i=1; i<data.size(); i+=3){
    if(stoi(data.at(i)) > maxage){
      maxage=stoi(data.at(i));
      person=data.at(i-1);
    }
  }

  cout<<"The oldest person is "<< person<<".";
  //add code above this line
  
  return 0;
  
}






//EXERCISE-5

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
vector <string> data;
  try{
    ifstream file;
    string read;
    file.open(path);
    if (!file){
      throw runtime_error("File failed to open");
    }
    while (getline(file,read)){
      stringstream ss(read);
      while (getline(ss,read, ',')){
        data.push_back(read);
      }
    } 
    file.close();

}     
  

  catch (exception& e){
    cerr<<e.what()<<endl;

  }

  string cities;
  cout<<"The following cities are in the Southern Hemisphere: ";

  for(int i=6; i<data.size(); i+=4){
    if (stoi(data.at(i))<0){
      cities+=(data.at(i-2)+", ");
    }
  }
  cities.pop_back();
  cities.pop_back();
  cities+=".";

  cout<<cities;

  //add code above this line
  
  return 0;
  
}
