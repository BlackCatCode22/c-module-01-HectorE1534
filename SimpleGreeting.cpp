#include <iostream>
using namespace std;

int main() {
  string name;
  string greeting;
  cout << "Please enter your full name: ";
  getline(cin,name);
  greeting = "Hello " + name + ", how can I help you today?";
  cout << greeting << endl;
  return 0;
}