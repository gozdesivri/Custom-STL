
#include <iostream>
#include "DynamicArray.hpp"
#include "LinkedList.hpp"
#include "Stack.hpp"
#include "Queue.hpp" // Yeni yapımızı ekledik

int main() {
    std::cout << "=========================================" << std::endl;
    std::cout << "        CUSTOM STL KUTUPHANESI TEST      " << std::endl;
    std::cout << "=========================================" << std::endl;

    // QUEUE (KUYRUK) TESTİ
    std::cout << "\n>>> QUEUE (KUYRUK) TESTI:" << std::endl;
    Queue<std::string> biletKuyrugu;

    biletKuyrugu.enqueue("Gozde"); // İlk girdi
    biletKuyrugu.enqueue("Ahmet");
    biletKuyrugu.enqueue("Mehmet");

    std::cout << "Kuyrugun en onundeki kisi: " << biletKuyrugu.front() << std::endl; // Gozde basmalı

    biletKuyrugu.dequeue(); // Gözde biletini aldı ve çıktı
    std::cout << "Gozde ciktiktan sonra en ondeki kisi: " << biletKuyrugu.front() << std::endl; // Ahmet basmalı

    return 0;
}