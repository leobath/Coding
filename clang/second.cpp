/*My Second Program*/
#include <iostream>
 
void count(int &a);

int main(int argc, char* argv[]) {
    int s = 0;
    count(s);
    std::cout << s << std::endl;
}

void count(int &a) {
    int x, i = 0;
    for(i = 0; i <= 12; i++){
        a = i;
    }
}

