//EXERCISE-1

#include <iostream>
#include <vector>
using namespace std;

//add code below this line
double GetAvg(double x1, double x2){
  double Avg=(x1+x2)/2;
  return Avg;
}

//add code above this line

int main(int argc, char** argv) {
  try {
    double x = stod(argv[1]);
    double y = stod(argv[2]);
    cout << GetAvg(x, y) << endl;
  }
  catch (invalid_argument& e) {
    cout << "One or more invalid arguments." << endl;
  }
  return 0;
}





//EXERCISE-2

#include <iostream>
#include <vector>
using namespace std;

//add code below this line
void GetOddsEvens(string str1, vector<int>& y) {
  if (x == "true") {
    for (auto a : y) {
      if (a % 2 == 0) {
        cout << a << endl;
      }
    }
  }
  if (x == "false") {
    for (auto a1 : y) {
      if (a1 % 2 == 1) {
        cout << a1 << endl;
      }
    }
  }
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}


//EXERCISE-3

#include <iostream>
#include <vector>
using namespace std;

//add code below this line
bool FindTerm(string str, vector<string>& y){
  bool b=false;
  for (auto i :y){
    if (i==str){
      b=true;
    }
  }
  return b;
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<string> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(argv[i]);
  }
  cout << boolalpha << FindTerm(x, y) << endl;
}


//EXERCISE-4

#include <iostream>
#include <vector>
using namespace std;

//add code below this line
bool IsPalindrome(string x) {
  bool palindrome = false;
  string y;
  for (int i = x.length() - 1; i >= 0; i--) {
    y += x.at(i);
  }
  if (x == y) {
    palindrome = true;
  }
  return palindrome;
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}


//EXERCISE-5

#include <iostream>
#include <vector>
using namespace std;

string Reverse(string x) {
  string y;
  for (int i = x.length() - 1; i >= 0; i--) {
    y += x.at(i);
  }
  return y;
}

//add code below this line
bool IsPalindrome(string x) {
  bool palindrome = false;
  if (x == (Reverse(x))) {
    palindrome = true;
  }
  return palindrome;
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}
