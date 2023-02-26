#include <iostream>
using namespace std;

string name;

int main() {
  cout << "Welcome what is your name?";
  cin >> name;
  char firstletter = name[0];
  cout << "Hello There!, " + name + ", The first letter of your name is \"" + firstletter + "\"";
  return 0;
}