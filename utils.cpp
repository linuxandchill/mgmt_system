#include <iostream> 
#include<vector>
#include "Employee.h"

using namespace std; 

void runTask(std::vector<Employee>& employee_list, int option){
  switch(option){
    case 1:
      std::cout << "Create record" << endl;  
      break;
    case 2:
      std::cout << "Print record"<< endl;  
      break;
    case 3:
      std::cout << "Search record"<< endl;  
      break;
    case 4:
      std::cout << "Delete record"<< endl;  
      break;
    case 5:
      std::cout << "Save record"<< endl;  
      break;
    default:
      std::cout << "Choose option between [1-5]" << endl;  
      break;

  }
}; 

void printMenu(){
    std::cout << "[1] Create Record" << std::endl;
    std::cout << "[2] Print employee info" << std::endl;
    std::cout << "[3] Search records " << std::endl;
    std::cout << "[4] Delete record " << std::endl;
    std::cout << "[5] Save" << std::endl;
    std::cout << "[6] Exit" << std::endl;
};  
