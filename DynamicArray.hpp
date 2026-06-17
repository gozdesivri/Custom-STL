#pragma once
#include <stdexcept>

template<typename T>
class DynamicArray {
private:
    T* data;
    int size;
    int capacity;

public:
    // 1. Standart Kurucu (Sende zaten var)
    DynamicArray() {
        capacity = 2;
        size = 0;
        data = new T[capacity];
    }

    // 2. YENİ! Kopyalama Kurucusu (Copy Constructor)
    // Bir dizi başka bir diziyle ilk defa oluşturulurken tetiklenir: DynamicArray<int> d2 = d1;
    DynamicArray(const DynamicArray& other) {
        size = other.size;
        capacity = other.capacity;
        
        // RAM'de tamamen yeni ve bağımsız bir alan ayırıyoruz!
        data = new T[capacity]; 
        
        // Diğer dizinin elemanlarını tek tek yeni alanımıza kopyalıyoruz (Deep Copy)
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    // 3. YENİ! Kopyalama Atama Operatörü (Copy Assignment Operator)
    // Halihazırda var olan bir diziye başka bir diziyi eşitlerken tetiklenir: d2 = d1;
    DynamicArray& operator=(const DynamicArray& other) {
        // Kendini kendine eşitleme durumunu kontrol et (Örn: d1 = d1;)
        if (this == &other) {
            return *this;
        }

        // Önce kendi üzerimizdeki eski belleği temizlemeliyiz ki sızıntı (leak) olmasın
        delete[] data;

        // Şimdi yeni değerleri alıp derin kopyalama yapıyoruz
        size = other.size;
        capacity = other.capacity;
        data = new T[capacity];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }

        return *this;
    }

    // 4. Yıkıcı (Destructor - Sende zaten var)
    ~DynamicArray() {
        delete[] data;
    }

    // --- DİĞER FONKSİYONLARIN (push_back, pop_back, getSize vs.) AYNI ŞEKİLDE AŞAĞIDA DURACAK ---
    void push_back(const T& value) {
        if (size == capacity) {
            capacity *= 2;
            T* newData = new T[capacity];
            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
        data[size] = value;
        size++;
    }

    void pop_back() {
        if (size == 0) throw std::out_of_range("Dizi bos!");
        size--;
    }

    void clear() {
        size = 0;
    }

    int getSize() const { return size; }
    int getCapacity() const { return capacity; }
    
    T& operator[](int index) {
        if (index < 0 || index >= size) throw std::out_of_range("Gecersiz indeks!");
        return data[index];
    }
};
