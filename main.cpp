#include <iostream>
#include <iomanip>
#include <vector>
#include "helpers.cpp"


using namespace std;

int main(){
  cout << "Hello World" << endl;
  
  vector < vector <float> > grid, result; 
  grid = zeros(5,5);
  grid[2][2] = 1.0;
  
  //result = normalize(grid);
  result = blur(grid, 0.12);
  
  for (int row = 0; row < result.size(); row++) {
    for (int col = 0; col < result[0].size(); col++) {
      cout << std::fixed << std::setprecision(3) << result[row][col] << "   ";
    }
    cout << endl;
  }
  
  
  return 0;
}