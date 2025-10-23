#include <iostream>

void printUserStatus(int /*userLevel*/) {
    // fonksiyonun içinde 'userLevel' diye bir değişken yok.
    // Gelen değer (5, 8, 10) buraya gelir gelmez yok edilir.
    
    std::cout << "Kullanici aktif." << std::endl;
}


int main() {
    int ahmetLevel = 5;
    int zeynepLevel = 8;
    
    
    printUserStatus(ahmetLevel);  
    printUserStatus(zeynepLevel);
    printUserStatus(10);
    
    return 0;
}