/*My Second Program*/
#include <iostream>
 
void count(int &a);

int main(int argc, char* argv[]) {
    int s = 0;
    count(s);
    std::cout << s << std::endl;
}

void count(int &a) {
    a++;
}