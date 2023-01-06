#include <ctime>
#include <iostream>
#include <array>
#include <vector>

int main(int argc, char *argv[]) {
double dt;
std::clock_t begin,end;
unsigned nb=10000;//number of nodes

// Version brute
begin = clock();
std::vector< std::vector< double > > b1 ;
b1.resize(nb);
for (int i = 0; i<nb;++i) {
b1[i].resize(3);
for (int j = 0; j<3; ++j){
b1[i][j]=i+j;}}
end = clock(); 
dt = double(end-begin)/CLOCKS_PER_SEC;
std::cout << "Time vector \t" << dt << std::endl;

// Exploitation de la dimension fixe
begin = clock();
std::vector< std::array< double,3 > > b2 ;
b2.resize(nb);
for (int i = 0; i<nb;++i) {
for (int j = 0; j<3; ++j){
b2[i][j]=i+j;}}
end = clock(); 
dt = double(end-begin)/CLOCKS_PER_SEC;
std::cout << "Time array \t" << dt << std::endl;
}
