#include <iostream>
using namespace std;
int price;
class car{ 
 public: 
 string brand;
 string model;
 
 
 void description(){
 cout<< "A car is a handheld electronic device that integrates various features beyond basic voice communication."<<endl<<endl;
 }
 
 void Dis(string x,string y ){ 
 brand =x;
 model= y;
 
 
 }
 
};
class OS : private car{ 
 public:
 void setprice(int p){
 price =p; 
 }
 int getprice(){
 return price; 
 }
 void display(){
 // cout<<"Brand = "<<brand<<" "<<endl<<"Model= "<<model<<endl; 
 cout<<"price: "<<getprice()<<endl<<endl;
 }
};
class config{
 public:
 string display;
 int refrsh_rate;
 void D(string i, int j){ 
 display =i;
 refrsh_rate =j; 
 
 }
 
};
class PS : public car, public config{ 
 public:
 string speed;
 string voltage;
 PS(string a, string b){ 
 speed =a;
 voltage =b; 
 
 }
 
 void show(){
 cout<<"Brand = "<<brand<<" "<<endl<<"Model= "<<model<<endl<<"Display = "<<display<<endl<<"REfresh rate = "<<refrsh_rate<<endl<<"speed = "<<speed<<endl<<"voltage = "<<voltage<<endl; 
 }
 PS(){
 cout<< "destructor executed."<<endl;
 }
};
int main(){
 PS hlw("120","12.7");
 hlw.Dis("BMW","series 2");
 hlw.D("Amulate",120);
 hlw.show();
 OS hi;
 hi.setprice(1000000);
 hi.display();
}

