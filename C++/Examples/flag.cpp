#include <iostream>
using namespace std;
class matrix
{
int A,B,C,D, determinant;
public:
matrix() { cin>>A>>B>>C>>D; }
int operator ~()
{
determinant = A*D - B*C;

return determinant;
}
void display() {cout<<determinant;}
};
int main()
{
matrix m1;
~m1;//destructor - destroys the memory in m1
m1.display();
return 0;
}



