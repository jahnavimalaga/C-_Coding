
#include <iostream>
using namespace std;

class Pizza {
   public:
      Pizza() { 
         cout << "Constructor called!" <<endl; 
      }
      ~Pizza() { 
         cout << "Destructor called!" <<endl; 
      }
};
int main() {
  // Pizza* myPizzaArray = new Pizza[4];
 // delete [] myPizzaArray; // Delete array
Pizza A1;
   return 0;
}

