
#include <iostream>
#include "DynamicArray.hpp"
#include "LinkedList.hpp" // Yeni kütüphanemizi ekledik

int main() {
    std::cout << "--- 1. KISIM: DYNAMIC ARRAY TEST ---" << std::endl;
    DynamicArray<std::string> isimler;
    isimler.push_back("Ahmet");
    isimler.push_back("Mehmet");
    std::cout << "Dizideki ilk isim: " << isimler[0] << "\n\n";

    std::cout << "--- 2. KISIM: LINKED LIST TEST ---" << std::endl;
    LinkedList<int> liste;
    
    liste.insertAtTail(10);
    liste.insertAtTail(20);
    liste.insertAtTail(30);

    std::cout << "Bagli Liste Elemanlari: ";
    liste.printList();
    std::cout << "Listenin Boyutu: " << liste.getSize() << std::endl;

    return 0;
}