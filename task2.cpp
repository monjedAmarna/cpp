#include <iostream>

using namespace std;
int n,ce=0,co=0;

int main() {
    

cout<<"enter num"<<endl;

for (int i=0;i<6;i++){
    cin>>n;
    if (n%2==0)
    ce++;
    if (n%2 !=0)
    co++;
    


}
cout <<"ce is"<<ce <<endl;
cout <<"co"<<co <<endl;
return 0;
}