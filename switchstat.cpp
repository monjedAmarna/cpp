#include <iostream>

using namespace std;
 
int main() {/*Ask the user to enter two operations (+, -, *, /) and two numbers, then perform the operation using switch.*/
    int n1 , n2 ,count,op;
    cout<<"enter tow digit"<<endl;
    cin >> n1>>n2;
    
    cout << "Enter number of operation: \n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout<<"exit 0\n";
    cin>>op;
    
    switch (op)
    {
    case 1:
        count =n1+n2;
            cout <<"count is "<<count<<endl;
    
        break;
    case 2:
        count =n1-n2;
        cout <<"count is "<<count<<endl;
    
        break;
    case 3:
        count =n1*n2;
        cout <<"count is "<<count<<endl;
    
        break;
    case 4:
        count =n1/n2;
        cout <<"count is "<<count<<endl;
    
        break;
    case 0:
        
        break;
    
    default:
        break;
    }

return 0;
}