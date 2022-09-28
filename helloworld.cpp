#include <iostream> 
#include <vector>

namespace first{
   int x = 1;
}
namespace second{
   int x = 2;
}

//typedef std ::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){
   using namespace std;
   // integer (whole number)
   //int age = 21;
   int year = 2023;
   int days = 7.5;

   // double(number including decimal)
   double price = 10.99;
   double gpa = 2.5;
   double temperature = 25.1;

   // single character
   char grade ='A';
   char initial = 'B';

   // boolean
   bool student = false;
   bool power = true;
   bool forSale = true;

   // string
   std::string name = "Avin";
   std::string day = "Friday";
   std::string food = "pizza";
   std::string address = "123 Fake St.";

   // circumference
   const double PI = 3.14159;
   const int LIGHT_SPEED = 299792458;
   const int WIDTH = 1920;
   const int HEIGHT = 1080;

   // NAmespace 
   int x = 0;

   // typedef 
   text_t firstName = "Avin";
   number_t age = 21;


   std::cout << firstName << '\n';
   std::cout << age << '\n';
   
   return 0;
}