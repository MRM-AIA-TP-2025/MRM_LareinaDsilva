//EXERCISE-1

#include <iostream>
using namespace std;

//add function definitions below this line
int RecursiveSum(int a){
  if (a==0){
    return 0;
  }
  else{
    int sum=a+RecursiveSum(a-1);
  }
}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << RecursiveSum(stoi(argv[1])) << endl;
  return 0;
}



//EXERCISE-2

#include <iostream>
#include <vector>
using namespace std;

//add function definitions below this line
int ListSum(vector<int>& nums) {
  if (nums.size() == 1) {
    return nums.at(0);
  }
  else {
    vector<int> new_vector(nums.begin() + 1, nums.begin() + nums.size());
    return nums.at(0) + ListSum(new_vector);
  }
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}


//EXERCISE-3

#include <iostream>
using namespace std;

//add function definitions below this line
int BunnyEars(int bunnies){
  if(bunnies==0){
    return 0;
  }
  else{
    int Num=2+BunnyEars(bunnies-1);
    return Num;
  }
}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << BunnyEars(stoi(argv[1])) << endl;
  return 0;
}



//EXERCISE-4

#include <iostream>
using namespace std;

//add function definitions below this line
string ReverseString(string str){
  if (str.length()<=1){
    return str;
  }
  else{
    string new_str=str.substr(str.length()-1)+ReverseString(str.substr(0, str.length()-1));
    return new_str;}
}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}



//EXERCISE-5

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//add function definitions below this line
int GetMax(vector<int>& nums) {
  if (nums.size() == 1) {
    return nums.at(0);
  }
  else {
    vector<int> n_vector(nums.begin() + 1, nums.begin() + nums.size());
    return max(nums.at(0), GetMax(n_vector));
  }
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}
