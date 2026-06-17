#pragma once
#include "DynamicArray.hpp"
#include <stdexcept>

template <typename T>
class Queue {
private:
    DynamicArray<T> container;

public:
    // enqueue: Kuyruğun sonuna eleman ekler (Kuyruğa girme)
    void enqueue(const T& value) {
        container.push_back(value);
    }

    // dequeue: Kuyruğun en önündeki (ilk giren) elemanı siler
    void dequeue() {
        if (isEmpty()) {
            throw std::out_of_range("Kuyruk bos, eleman cikarilamaz!");
        }
        // İlk elemanı diziden çıkarmak için elemanları bir öne kaydırıyoruz
        for (int i = 1; i < container.getSize(); i++) {
            container[i - 1] = container[i];
        }
        container.pop_back(); // Fazlalık kalan son elemanı siliyoruz
    }

    // front: En öndeki elemanın ne olduğunu gösterir
    T& front() {
        if (isEmpty()) {
            throw std::out_of_range("Kuyruk bos!");
        }
        return container[0]; // İlk giren eleman her zaman 0. indekstir
    }

    bool isEmpty() const {
        return container.getSize() == 0;
    }

    int getSize() const {
        return container.getSize();
    }
};
