//Exercise-1

#include <iostream>
using namespace std;

//add class definitions below this line
class Fruit{
  public:
   Fruit(string n, string c){
    name=n;
    color=c;
    
   }

   string GetName(){
    return name;
   }
   string GetColor(){
    return color;
   }
   void SetName(string new_name){
    name=new_name;
   }
   void SetColor(string new_color){
    color=new_color;
   }

  private:
   string name;
   string color;
};
//add class definitions above this line

int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Fruit fruit("apple", "red");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;
  fruit.SetName("orange");
  fruit.SetColor("orange");
  cout << fruit.GetName() << endl;
  cout << fruit.GetColor() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}

//Exercise-2

#include <iostream>
using namespace std;

//add class definitions below this line
class Watch{
  public:
   Watch(string mf, string md, int dia, int w_r, string mt){
      manufacturer=mf;
      model=md;
      diameter=dia;
      water_resistance=w_r;
      material=mt;
  }

    void Summary(){
      cout<<"Manufacturer: "<<manufacturer<<endl;
      cout<<"Model: "<<model<<endl;
      cout<<"Diameter: "<<diameter<<" mm"<<endl;
      cout<<"Water Resistance: "<<water_resistance<<" m"<<endl;
      cout<<"Material: "<<material<<endl;
    }
   string GetManufacturer(){
    return manufacturer;}
   void SetManufacturer(string new_manufacturer){
    manufacturer=new_manufacturer;}

   string GetModel(){
    return model;}
   void SetModel(string new_model){
    model=new_model;
   }
   int GetDiameter(){
     return diameter;}
   void SetDiameter(int  new_diameter){
     diameter=new_diameter;
   }

   int GetWaterResistance(){
       return water_resistance;}
    void SetWaterResistance(int new_waterresistance){
    water_resistance=new_waterresistance;
   }

   string GetMaterial(){
      return material;}
   void SetMaterial(string new_material){
    material=new_material;}

  private:
  string manufacturer;
  string model;
  int diameter;
  int water_resistance;
  string material;

};

//add class definitions above this line

int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}


//Exercise-3

#include <iostream>
using namespace std;

class Song {
  
  //add class definitions below this line
 public:
  Song(string a, string t, string al){
    artist=a;
    title=t;
    album=al;
  }
  string GetArtist(){
    return artist;
  }
  void SetArtist(string new_artist){
    artist=new_artist;
  }
  string GetTitle(){
    return title;
  }
  void SetTitle(string new_title){
    title=new_title;
  }
  string GetAlbum(){
    return album;
  }
  void SetAlbum(string new_album){
    album=new_album;
  }
  int GetPlayCount(){
    return play_count;
  }
  double GetPayRate(){
    return pay_rate;
  }
  double GetMoneyEarned(){
    return money_earned;
  }
  void Play(int count){
    while (count){
      UpdatePlayCount();
      UpdateMoneyEarned();
      count-=1;}
  }
  
  void Stats(){
    cout<< artist<<endl;
    cout<<title<<endl;
    cout<<album<<endl;
    cout<<play_count<<endl;
    cout<<pay_rate<<endl;
    cout<<money_earned<<endl;
  }

  //add class definitions above this line
  
//DO NOT EDIT CODE BELOW THIS LINE

  private:
    string artist;
    string title;
    string album;
    int play_count = 0;
    const double pay_rate = 0.001;
    double money_earned = 0;
    
    void UpdatePlayCount() {
      play_count++;
    }
  
    void UpdateMoneyEarned() {
      money_earned = play_count * pay_rate;
    }
};

int main() {

  Song my_song("Led Zeppelin", "Ten Years Gone", "Physical Graffiti");
  cout << my_song.GetArtist() << endl;
  cout << my_song.GetTitle() << endl;
  cout << my_song.GetAlbum() << endl;
  cout << my_song.GetPlayCount() << endl;
  cout << my_song.GetPayRate() << endl;
  cout << my_song.GetMoneyEarned() << endl;
  my_song.SetArtist("Michael Jackson");
  my_song.SetTitle("Beat It");
  my_song.SetAlbum("Thriller");
  my_song.Play(1000000);
  my_song.Stats();
  
  return 0;
  
}

//DO NOT EDIT CODE ABOVE THIS LINE



//Exercise-4

#include <iostream>
#include <iomanip>
using namespace std;

//add class definitions below this line
class Atm{
  public:
   Atm(){
   }
   double GetMoney(){
    return money;
   }
   void Deposit(double amt){
    if (amt>0){
      money+=amt;}
    else{
      cout<<"You cannot deposit a negative or 0 amount of money."<<endl;
    }
   }
   void Withdraw(double amt){
    if(amt<=0){
      cout<<"You cannot withdraw a negative or 0 amount of money."<<endl;
    } 
    else if (amt>money){
     cout<<"You do not have enough funds to withdraw that amount."<<endl;
   }
   else{
     money=money-amt;
}}; 


  private:
  double money=0;
};

//add class definitions above this line

int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Atm my_atm;
  my_atm.Deposit(-10);
  my_atm.Deposit(100.02);
  my_atm.Withdraw(-20);
  my_atm.Withdraw(200);
  my_atm.Withdraw(50.22);
  cout << fixed; //prevents value from being truncated or rounded
  cout << setprecision(2); //sets value to 2 decimal places
  cout << my_atm.GetMoney() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}



//Exercise-5

#include <iostream>
using namespace std;

//add class definitions below this line
class CardBinder {
  public:
    CardBinder() {}
  
    int GetGold() {
      return gold_card;
    }
  
    int GetSilver() {
      return silver_card;
    }
  
    int GetTotal() {
      return gold_card + silver_card;
    }
  
    void AddGold(int cards) {
      if (cards <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      }
      else if (cards + gold_card + silver_card > 20) {
        cout << "You do not have enough binder room." << endl;
      }
      else {
        gold_card += cards;
      }
    }
  
    void RemoveGold(int cards) {
      if (cards <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      }
      else if (gold_card - cards < 0) {
        cout << "You do not have enough gold cards to remove." << endl;
      }
      else {
        gold_card -= cards;
      }
    }
  
    void AddSilver(int cards) {
      if (cards <= 0) {
        cout << "You cannot add a negative or 0 amount of cards." << endl;
      }
      else if (cards + gold_card +silver_card > 20) {
        cout << "You do not have enough binder room." << endl;
      }
      else {
        silver_card += cards;
      }
    }
  
    void RemoveSilver(int cards) {
      if (cards <= 0) {
        cout << "You cannot remove a negative or 0 amount of cards." << endl;
      }
      else if (silver_card - cards < 0) {
        cout << "You do not have enough silver cards to remove." << endl;
      }
      else {
        silver_card -= cards;
      }
    }
  
  private:
    int gold_card = 0;
    int silver_card = 0;
};


//add class definitions above this line

int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  CardBinder cb;
  cb.AddGold(21);
  cb.AddGold(11);
  cb.AddSilver(-4);
  cb.AddSilver(8);
  cb.RemoveGold(12);
  cb.RemoveGold(4);
  cb.RemoveSilver(-2);
  cb.RemoveSilver(6);
  cout << cb.GetGold() << endl;
  cout << cb.GetSilver() << endl;
  cout << cb.GetTotal() << endl;
  

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}
