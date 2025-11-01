# 🚢 Proje Adı: C++ Amiral Battı (Battleship Console App)

Bu proje, C++ dilinin temel kontrol akışı ve veri organizasyon yapıları kullanılarak geliştirilmiş, 5x5 tahta üzerinde oynanan klasik Amiral Battı oyunudur.

Oyun, oyuncunun doğru atış yaparak gemi parçalarını (3 adet) sınırlı hak (10 hak) içinde batırmasını amaçlar.

### 🛠️ KULLANILAN C++ BECERİLERİ

Bu proje, aşağıdaki temel programlama ve veri yönetimi becerilerini sergilemektedir:

* **Çok Boyutlu Diziler (Matrisler):** Oyun tahtasını (`char[5][5]`) temsil etmek ve koordinat bazlı veri okuma/yazma.
* **Fonksiyonel Tasarım:** Tahtayı yazdırma (`tahtayzdr`) ve gemi yerleştirme (`gemiyerlestir`) görevlerini modüler fonksiyonlara ayırma.
* **Rastgelelik (`rand`):** Geminin konumunu her oyunda farklı olacak şekilde rastgele belirleme.
* **Kontrol Akışı:** Oyun döngüsünü (`while`) ve oyuncu girişini (`satir < 0 || satir > 4`) kontrol etmek.
* **Oyun Kuralları:** Özel hak sistemi (isabette hak kazanma, ıskada hak kaybetme) ile oyun mantığını yönetme.

### 🚀 Nasıl Çalıştırılır (Derleme)

Bu projeyi derlemek için C++ derleyicisi (`g++` veya Visual Studio) ve matematik kütüphanesi gereklidir.

1.  **Deponuzu indirin/klonlayın.**
2.  Konsolu açın ve dosyanın bulunduğu dizine gidin.
3.  Aşağıdaki komutu kullanarak projeyi derleyin:

```bash
(main.cpp yerine kod dosyanızın adını kullanın.)
g++ main.cpp -o battleship -lm

4.Oyun dosyasını çalıştırın.
./battleship
