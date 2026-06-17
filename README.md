# Custom STL (Standard Template Library) - C++

Bu proje, C++ dilinde yaygın olarak kullanılan veri yapılarının şablonlu (`template`) mimari kullanılarak sıfırdan geliştirildiği esnek ve performans odaklı bir **Veri Yapıları Kütüphanesidir**.

Projenin temel amacı, standart kütüphaneye bağımlı kalmadan dinamik bellek yönetimini, pointer zincirlerini ve veri yapıları mantığını derinlemesine uygulamaktır.

## 🚀 İçerik ve Özellikler

* **DynamicArray (Dinamik Dizi):** Bellekte ardışık yer tutan, otomatik genişleme (`resize`) kapasitesine sahip, bellek sızıntılarına karşı kurucu ve yıkıcı fonksiyonları (Kural 3/5) optimize edilmiş esnek dizi yapısı.
* **LinkedList (Bağlı Liste):** Belleği dinamik olarak kullanan, birbirini pointer'lar ile işaret eden düğümlerden (`Node`) oluşan tek yönlü bağlı liste yapısı.
* **Stack (Yığın):** LIFO (Last In, First Out) prensibiyle çalışan, kendi yazdığımız `DynamicArray` yapısını taban kapsayıcı (`container`) olarak kullanan üst üste eklemeli veri yapısı.

## 🛠️ Kurulum ve Çalıştırma

Projeyi bilgisayarınızda derleyip test etmek için terminalden aşağıdaki komutları çalıştırabilirsiniz:

```bash
# Projeyi derleme
g++ main.cpp -o main

# Programı çalıştırma
.\main
