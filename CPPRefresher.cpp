#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) { 

/*Array addressing*/
double A[4] = {0,1,2,3};
double * A1[4];
long long int B;
double C;
B = (&A[0]) - (&A[0]);
cout << "B = " << B << endl;
B = A - A;
C = &A[0] - &A[0];
A1[1] = A;


B = B;
cout << "B = " << B << endl;
cout << "C = " << C << endl;
cout << "A[1] = " << A1[1] << endl;


/*Pointers*/
int *p = new int; //allocate dynamic memory for 1 int
*p = 10; //store value of 10 in memory
int *q = new int[*p]; //allocate dynamic memory for 10 ints(array)

*(q+0) = 0; //store value of 0 in 1st memory place
*(q+1) = 1; //store value of 1 in 2nd memory place
*(q+2) = 2; //store value of 2 in 3rd memory place

cout << "*(q+0) = " << *(q+0) << endl;
cout << "*(q+1) = " << *(q+1) << endl;
cout << "*(q+2) = " << *(q+2) << endl;


/*Vectors: This can grow and shrink in size. Uses dynamic memory.*/
vector<int> v; //declare template. is kind of like string in a way
cout << "vector size = " << v.size() << endl; //can see size
v.push_back(0); //push onto template
cout << "v[0] = " << v[0] << endl; //report
cout << "New vector size = " << v.size() << endl; //report
v.push_back(1);
cout << "v[1] = " << v[1] << endl;
cout << "New vector size = " << v.size() << endl;
v.push_back(2);
cout << "v[2] = " << v[2] << endl;
cout << "New vector size = " << v.size() << endl;

v.insert (v.end(),10,100); //insert 10 100s at the end
cout << "v[2] = " << v[2] << endl;
cout << "v[3] = " << v[3] << endl;
cout << "v[4] = " << v[4] << endl;
cout << "New vector size = " << v.size() << '\n';

v.pop_back(); //pop of the end of the template
cout << "New vector size = " << v.size() << '\n';
cout << "v[2] = " << v[2] << endl;
cout << "v[3] = " << v[3] << endl;
cout << "v[4] = " << v[4] << endl;

//Extra Stuff
cout << "Hello, world!\n";

delete p; 
delete[] q;
}

