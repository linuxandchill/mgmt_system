#include <iostream>
#include <vector>
#include <fstream>
#include <sstream> 
#include <cstdlib> 
#include "Employee.h"

using namespace std;

void readFile(std::vector<Employee>& employee_list);

void readFile(std::vector<Employee>& employee_list){
  std::ifstream fin("MOCK_DATA.csv"); 
  if (!fin){
    std::cout << "Unable to access db." << std::endl;
    std::cout << "Double-check file exists." << std::endl;
    exit(1); 
  }

  std::string line;
  int record_number {-1}; 
  while (!fin.eof()){
    std::getline(fin, line); 

    record_number++ ; 
    std::cout << record_number << " - " 
      << line << std::endl; 
  }
}


int main(){

  std::vector<Employee> employee_list; 

  readFile(employee_list); 

  //Employee John {12}; 
  //std::cout << John.ID <<std::endl;
  return 0;
}
