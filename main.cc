#include <iostream>
#include <vector>
#include <fstream>
#include <sstream> 
#include <cstdlib> 

using namespace std;

struct Employee{
  int ID;
  std::string name;
  double salary;
  double pf;
  double insurance;
  std::string email; 
}; 

void readFile(std::vector<Employee> employee_list);

void readFile(std::vector<Employee> employee_list){
  std::ifstream fin("MOCK_DATA.csv"); 
  if (!fin){
    std::cout << "Unable to access db." << std::endl;
    std::cout << "Double-check file exists." << std::endl;
    exit(1); 
  }
}


int main(){

  std::vector<Employee> employee_list; 
  return 0;
}
