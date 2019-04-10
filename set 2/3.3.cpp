#include <iostream >

void doubleNumber(int &num) { num=num*2; }
// parametro pasado por referencia

int main() {
    int num=35;
    doubleNumber(num);
    std::cout << num;   // Should print 70
    return 0;
}
