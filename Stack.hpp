
#pragma once
#include "DynamicArray.hpp" // Kendi yazdığımız dinamik diziyi temel alıyoruz
#include <stdexcept>

template <typename T>
class Stack {
private:
    DynamicArray<T> container; // Verileri tutmak için kendi dizimizi kullanıyoruz

public:
    // push: Yığının en üstüne eleman ekler
    void push(const T& value) {
        container.push_back(value); // Elemanı dizinin sonuna ekliyoruz
    }

    // pop: Yığının en üstündeki elemanı siler
    void pop() {
        if (isEmpty()) {
            throw std::out_of_range("Yigin bos, eleman cikarilamaz!");
        }
        container.pop_back(); // Dizinin son elemanını siliyoruz
    }

    // top: En üstteki elemanın ne olduğunu bize gösterir (Silmez)
    T& top() {
        if (isEmpty()) {
            throw std::out_of_range("Yigin bos, ustte eleman yok!");
        }
        // Son elemanın indeksine ulaşıyoruz (size - 1)
        return container[container.getSize() - 1];
    }

    // isEmpty: Yığın boş mu dolu mu kontrol eder
    bool isEmpty() const {
        return container.getSize() == 0;
    }

    // getSize: Yığında anlık kaç eleman olduğunu söner
    int getSize() const {
        return container.getSize();
    }
};