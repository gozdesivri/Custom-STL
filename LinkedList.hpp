
#pragma once
#include <iostream>
#include <stdexcept>

template<typename T>
class LinkedList {
private:
    // Bağlı listenin her bir elemanı (Düğüm) için iç yapı
    struct Node {
        T data;       // Tutulan veri
        Node* next;   // Bir sonraki düğümü gösteren pointer

        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* head; // Listenin ilk düğümünü gösteren pointer
    int size;   // Listede kaç eleman olduğunu tutar

public:
    // Kurucu Fonksiyon (Constructor) - Başlangıçta liste boştur
    LinkedList() : head(nullptr), size(0) {}

    // Yıkıcı Fonksiyon (Destructor) - Hafıza sızıntısı olmasın diye tüm düğümleri siler
    ~LinkedList() {
        clear();
    }

    // insertAtTail: Listenin en sonuna yeni eleman ekler
    void insertAtTail(const T& value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            // Liste boşsa, yeni düğüm ilk düğüm olur
            head = newNode;
        } else {
            // Liste boş değilse, en son düğümü bulana kadar ilerle
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            // En son düğümün sonrasına yeni düğümü bağla
            temp->next = newNode;
        }
        size++;
    }

    // printList: Listeyi ekrana sırayla basar
    void printList() const {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // clear: Tüm listeyi siler ve belleği serbest bırakır
    void clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current; // Düğümü RAM'den sil
            current = nextNode;
        }
        head = nullptr;
        size = 0;
    }

    // getSize: Eleman sayısını döner
    int getSize() const {
        return size;
    }
};