#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add a few more items to the grocery list 
  grocery.push_back("Gluten-Free Bread");
  grocery.push_back("Peaches");
  grocery.push_back("C Plus");
  
  // Print the size of grocery
  std::cout << grocery.size() << "\n";
  
}