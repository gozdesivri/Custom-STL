
#include <iostream>
#include "DynamicArray.hpp"
#include "LinkedList.hpp"
#include "Stack.hpp" // Yeni yapımızı dahil ettik

int main() {
    std::cout << "=========================================" << std::endl;
    std::cout << "        CUSTOM STL KUTUPHANESI TEST      " << std::endl;
    std::cout << "=========================================" << std::endl;

    // 1. STACK TESTİ
    std::cout << "\n>>> STACK (YIGIN) TESTI:" << std::endl;
    Stack<int> tabaklar;
    
    tabaklar.push(10); // En altta
    tabaklar.push(20);
    tabaklar.push(30); // En üstte

    std::cout << "En ustteki tabak: " << tabaklar.top() << std::endl; // 30 basmalı
    
    tabaklar.pop(); // En üsttekini (30) aldık
    std::cout << "30'u pop ettikten sonra en ustteki: " << tabaklar.top() << std::endl; // 20 basmalı

    // 2. LINKED LIST TESTİ
    std::cout << "\n>>> LINKED LIST TESTI:" << std::endl;
    LinkedList<std::string> sehirler;
    sehirler.insertAtTail("Bursa");
    sehirler.insertAtTail("Istanbul");
    sehirler.printList();

    return 0;
}