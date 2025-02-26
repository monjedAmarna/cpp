#include <iostream>
using namespace std;

int main() {
    int rows , cols ;
    cin>>rows>>cols;
    int matrix[rows][cols];
 
    cout << "Enter values for the matrix:" << endl;
    
    for (int i = 0; i < rows; i++) {        
        for (int j = 0; j < cols; j++) {          
            cin >> matrix[i][j];      
        }
    }

    cout << "The matrix is:" << endl;
    
    for (int i = 0; i < rows; i++) {   
        for (int j = 0; j < cols; j++) {        
            cout << matrix[i][j] << " ";     
        }
        cout << endl; 
       }

    return 0;
}
