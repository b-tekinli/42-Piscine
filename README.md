# 42

<!--
42 Progress

[![BTekinli's 42 stats](https://badge42.herokuapp.com/api/stats/btekinli)](https://profile.intra.42.fr/users/btekinli)
-->

## C-Piscine

<details>
  
  <summary>:computer: LINUX VE VIM </summary>
  
## [LİNUX ve VİM Komutları]()
### LİNUX KOMUTLARI <br />
- date : tarih ve saati verir.
- ls : bulunduğumuz dizindeki klasörleri listeler.
o Parametre belirtme örnek: ls -a bu komut aynı zamanda gizli dosyaları listeler.
- ls -l : bu komut dosyaları dizin içerisinde listeli bir şekilde gösterir. Dosyalar en son ne zaman kim tarafından değiştirildi, yazma izinleri gibi bilgileri gösterir.
- Tab tuşu kullanımı:  daha çok, uzun isimli dosyalara gitmek istediğimizde dosyanın sadece baş harfini ya da duruma göre birkaç harfini yazıp tab tuşuna başarınca dosya 	adının tamamını yazar.
- man : Kullanıcı klavuzu okumak için yapılır. :arrow_right: man ls, man date gibi.
- history : geçmişte yaptığımız komut satırı geçmişini gösterir. Özellikle bilgisayar kapanırsa falan çok işimize yarar.

 ### LİNUX DOSYA KOMUTLARI
- Linux’ta her şey dosyadır ve dosya sistemi hiyerarşiktir.
- Dosyalar(-) : yanında da gördüğünüz gibi – ile gösterilir.
- Dizinler(d) : d ile gösterilir.
- Bağlantılar(l) : inglizcesi link’tir. l harfi ile gösterilir.
- /Kök Dizin: sağa yatık taksim / ile gösterilir ve kök dizinden daha üst dizine çıkılmaz çünkü en üstteki dizindir yani hiyerarşinin başladığı yerdir. Tüm dizinleri 		içerir.
- /bin : temel kullanıcı komutlarıdır yani programlarını içeren klasör.
- /boot : Bilgisayarın açılışında kullanılan dosyaların yer aldığı statik klasör.
- /dev : cihaz dosyaları.
- /etc : sisteme özel ayarların özellikle konfigürasyonların bulunduğu klasördür.
- /home : kullanıcı ana dizinlerini tutan klasördür.
- /lib : temel kütüphaneler ve çekirdek modüllerinin tutulduğu klasördür.
- /media : çıkarılabilir ortam dosyalarını tutan klasördür. 
				<br /> **ÖRNEK**: flash bellek taktığımızda içindekileri .
- /mnt : yerleştirilen, harici olarak takılan hdd gibi dosyaları tutan klasördür.
- /srv : servis dosyaları.
- /tmp : geçici dosyalar. herkesin okuma ve yazma izni vardır.
- /var : çeşitli dosyalar. Örnek: log dosyalarının tutulduğu kalsördür.
- /root : root kullanıcısı için ana dizindir.
- cd : istediğimiz dosyalar arasında gezinmemizi sağlar.
- cd Desktop : Masaüstüne gider.
- cd .. : bulunduğumuz dosyadan geri çıkmayı yani 1 üst dizine çıkmamızı sağlar.
- pwd : bulunduğumuz klasörün hangi dizinler altında olduğunu belirtir.
- mkdir : dosya oluşturmamızı sağlar. Örnek: mkdir denemeDosyasi
- touch : dosyaları uzantılarıyla oluşturmamızı sağlar. 
- Birden fazla dosyayı aynı satırda oluşturabiliriz. 
	Örnek: touch deneme ornek dosya asdfs gibi.
	Örnek: mkdir deneme ornek dosyaAdi gibi.
- rm : dosyayı silmemizi sağlar. Örnek: rm odev.txt gibi. Birden fazla dosyayı aralarında boşluk bırarak dosya oluşturmada yaptığımız gibi silebiliriz.
- -r parametresi : dosya siler ve dizinlerin içindeki dosya ve klasörleri de siler. 
	**Örnek**: rm -r hafta 1 gibi. Birden fazla dosyayı aynı anda silebiliriz.
- cp : dosyaları kopyalamızı sağlar. Örnek: cp ders gibi.
  Kopyalamak istediğimiz dosyayı başka klasörlere de kopyalayabiliriz.
	Örnek: cp kopyalanacakDosya kopyalanacakDosyaDizini/ 
		cd kopyalanacakDosyaDizini/
  ls -l
  Bir üst dizine de kopyalayabiliriz.
	<br />
	
	Örnek: cp kopyalanacakDosya ../
	
	
		Dizin kopyalama işlemi:
		mkdir dersler
		ls -l
		cp -r matematik/ dersler/
		cd dersler
		ls -l
        
# VİM
### Vim NEDİR ?

:arrow_right: Vim bir metin editörüdür. Öğrenmesi zahmetli olduğu kadar zevkli olan, öğrenildikten sonra vazgeçemeyeceğiniz bir editör. <br />
			Komut satırından: <br />
			:arrow_right: vim -O deneme1.c deneme2.c  > Dikey pencerelerde .c uzantılı 2 dosya açar. <br />
:arrow_right: vim -o deneme3.c deneme4.c > Yatay pencerelerde .c uzantılı 2 dosya açar. <br />
:arrow_right: CTRL+W 	> Yatay ve dikey pencereler arası geçiş. <br /> <br />
			***Önemli Uyarı:
			BİR ELEKTRİK KESİNTİSİ VEYA SİSTEMİ RESTART YAPTIGINIZDA EGER O AN 				VİM İLE CALISIYORSANIZ VİM BİRDAHAKİ ACISINIZDA O DOSYAYA SADECE 				OKUMA İZNİ VERİR.***
<br />	<br />
*YAZMA İZNİ İÇİN;
:arrow_right: :w!  komutu verilmelidir.* <br /> <br />
Kullanılabilir komutlar : <br />
:arrow_right: vim deneme.txt > deneme.txt adında bir dosya oluşturur. <br />
:arrow_right: i  > vim de yazı yazma moduna geçer(insert) <br />

:arrow_right: ESC > ESC tuşu ile komut verme moduna geçilir.Yani komut vermek için her defasında esc tusuna basılmalı. <br />

:arrow_right: :q > Çıkmak için kullanılır.Kaydetmeden çıkılırsa hata verir. <br />

:arrow_right: :wq > Yaz ve çık <br />
:arrow_right: h > Metin üzerinde sola gider <br />
:arrow_right: l > Sağa gider <br />
:arrow_right: k > Yukarı <br />
:arrow_right: j > Asağı <br />
		Not:Yön tuşları yerine h-l-j-k kullanımı hızlanmayı sağlar. <br />
:arrow_right: fm  > “Sadece” bulundugu satırda ileriye doğru ‘m’ araması yapar. <br />
:arrow_right: fa > “Sadece” bulundugu satırda geriye doğru ‘a’ araması yapar. <br />
:arrow_right: 0 > Satır başına git <br />
:arrow_right: $ > Satır sonuna git <br />
:arrow_right: 2$ > Bir alttaki satırın sonuna git <br />
:arrow_right: 5$ > 4 alttaki satırın sonuna git <br />
:arrow_right: 33w > 33 kelime ileri git <br />
:arrow_right: 14b > 14 kelime geri git <br />
:arrow_right: G > Dosyanın son satırına git <br />
:arrow_right: 1G > Dosyanın ilk satırına git <br />
:arrow_right: 24G > Dosyanın 24.satırına git <br />
:arrow_right: 33w > 33 kelime ileri git <br />
:arrow_right: G > Dosyanın son satırına git <br />
:arrow_right: 1G > Dosyanın ilk satırına git <br />
:arrow_right: :set number > Ekranın soluna satır numaraları ekler! <br />
:arrow_right: :set nonumber 	 > Satır numaralarını kaldırır. <br />
:arrow_right: /linux > metin içinde linux kelimesini arar <br />
:arrow_right: :set hlsearch 	 > Aranan kelimeleri renklendirir. <br />
:arrow_right: :set nohlsearch  > hlsearch özelliğini kapatır. <br />
:arrow_right: yy > Bulundugu Satırı kopyalar <br />
:arrow_right: 3y > 3 satırı kopyalar <br />
:arrow_right: . > Kopyalanan satırı yapıştırır <br />
:arrow_right: G > Dosya sonuna git <br />
:arrow_right: ~ > İmlecin bulundugu yerdeki harfi kücük/büyük harfle değiştir <br />
:arrow_right: 4~ > önündeki 4 karakteri kücük/büyük harfe dönüştür. <br />
:arrow_right: :split > Ekranı pencerelere böl <br />
:arrow_right: V > Visual mod -> Bu modda fare ile hareket ettirilen satırlar renklenir. <br />
:arrow_right: > > Bulundugu satırı shift genişliği kadar kaydırır(Visual modda) <br />
:arrow_right: :syntax on > Tanınmayan dosya türlerinde metni renklendirir <br />
:arrow_right: :set shiftwidth=4 > Tab boşluğunu ayarlar <br />
:arrow_right: :mkvimrc dosyaismi > set vb yapılan ayarların saklanmasını sağlar. <br />
:arrow_right: :source dosyaismi > kaydedilen ayarları çağırır. <br />
	
</details>


<details>
  
  <summary>:computer: C Fonksiyonları </summary>
	
## 42-Piscine C Fonksiyonları

### Temel Veri Tipleri Özet


### SHORT-LONG-LONG LONG-UNSIGNED KAVRAMLARI

1. short: Değişkeni short ile tanımladığımızda hafızada daha az yer kaplayacaktır ancak short ile tanımladığımız değişkenlerin değer aralığı da daha az olacaktır. Sadece değer aralığı düşük olan sayılarda kullanılabilir.

2. long: Değişkeni long ile tanımladığımızda hafızada daha fazla yer kaplayacaktır ancak long ile tanımladığımız değişkenlerin değer aralığı da daha fazla olacaktır. Sadece değer aralığı yüksek olan sayılarda kullanılabilir.

3. long long: Değişkeni long long ile tanımladığımızda hafızada daha fazla yer kaplayacaktır ancak long long ile tanımladığımız değişkenlerin değer aralığı da çok daha fazla olacaktır. Sadece değer aralığı çok yüksek olan sayılarda kullanılabilir.

4. unsigned: Değişkeni unsigned ile tanımladığımızda hafızada aynı düzeyde yer kaplayacaktır ancak değer aralığı 0'dan başlayacaktır. Sadece pozitif sayıları saklayacağımız durumlarda kullanılabilir.



### FLOAT VE DOUBLE VERİ TİPLERİ ARASINDAKİ FARKLAR

1. Float: Hafızada 32 bit yer kaplamaktadır, double veri tipine göre daha az yer kaplamasına rağmen virgül hassasiyeti daha düşüktür. Yani virgül hassasiyeti daha az olan sayılarda kullanılabilir.

2. Double: Hafızada 64 bit yer kaplamaktadır, float veri tipine göre daha fazla yer kaplamasına rağmen virgül hassasiyeti daha yüksektir. Yani virgül hassasiyeti daha fazla olan sayılarda kullanılabilir.



### SIZEOF FONKSİYONU

İçerisine verdiğimiz değişkenin, hafızada kaç byte yer kapladığını bize sunuyor.



### HEXADECIMAL VE OCTAL SAYI TABANLARI

1. Hexadecimal: Değer aralığı 0-9 ve A-F arasında değişiyor. Yani 9 değerinden sonra 10 değil de A değeri geliyor. Tüm hexadecimal değerleri şu şekilde; 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F

2. Octal: Değer aralığı 0-7 arasında değişiyor. Tüm octal değerleri şu şekilde; 0,1,2,3,4,5,6,7



### PRINTF FONKSİYONUNDA KULLANILAN BAZI KARAKTERLER

1. \n karakteri: Bir alt satıra geçmek için kullanılır. Kullanıldığında bir sonraki satırdan yazılmaya devam edilir.

2. \t karakteri: Bir tab boşluğu kadar sağa geçmek için kullanılır. Kullanıldığında bir tab boşluğu sağdan yazılmaya devam edilir.

3. \b karakteri: Klavyedeki backspace(silme) tuşunun karşılığıdır. Kullanıldığında bir kere backspace(silme) tuşuna basılmış gibi olur.

4. ' karakteri: Çift tırnak ile başladığımız ifadenin içerisinde tırnak işareti yazmak için kullanılır.

5. \\ karakteri: \ ifadesini yazabilmek için kullanılır. Tek bir tane \ kullanırsak eğer program hata verecektir, bu yüzden \ yazmak istediğimizde 2 tane \ ifadesi kullanırız.

6. \" karakteri: " ifadesini yazabilmek için kullanılır. Çift tırnak ile başladığımız ifadenin içerisinde direkt olarak " kullanırsak eğer program hata verecektir, bu yüzden " yazmak istediğimizde \" şeklinde kullanırız.

7. %% karakteri: % ifadesini yazabilmek için kullanılır. Çift tırnak ile başladığımız ifadenin içerisinde direkt olarak % kullanırsak eğer program hata verecektir, bu yüzden % yazmak istediğimizde %% şeklinde kullanırız.



### CHAR VERİ TİPİ HAZIR FONKSİYONLAR

1. isalpha Fonksiyonu: Fonksiyon içerisine verilen karakterin alfabetik bir değer olup olmadığı sonucunu verir. Eğer ki verilen karakter alfabetik değilse 0 sonucu verir, aksi halde 0'dan farklı sonuç verir. Bir değerin alfabetik olabilmesi için A-Z veya a-z arasında olması gerekmektedir.

2. isdigit Fonksiyonu: Fonksiyon içerisine verilen karakterin rakam olup olmadığı sonucunu verir. Eğer ki verilen karakter rakam değil ise 0 sonucu aksi halde 1 sonucu verir. Bir değerin rakam olabilmesi için 0-9 arasında olması gerekmektedir.

3. isalnum Fonksiyonu: Fonksiyon içerisine verilen karakterin alfanümerik bir değer olup olmadığı sonucunu verir. Eğer ki verilen karakter alfanümerik değilse 0 sonucu verir, aksi halde 1 sonucu verir. Bir değerin alfanümerik olabilmesi için ya alfabetik(A-Z veya a-z arasında) ya da rakam(0-9 arasında) olması gerekmektedir.

4 islower Fonksiyonu: Fonksiyon içerisine verilen karakterin küçük harf olup olmadığını sorgular. Eğer ki verilen karakter küçük harf değilse 0 sonucu verir, aksi halde 1 sonucu verir.

5. isupper Fonksiyonu: Fonksiyon içerisine verilen karakterin büyük harf olup olmadığını sorgular. Eğer ki verilen karakter büyük harf değilse 0 sonucu verir, aksi halde 1 sonucu verir.

6. tolower Fonksiyonu: Fonksiyon içerisine verilen karakteri küçük harfe çevirir.

7. toupper Fonksiyonu: Fonksiyon içerisine verilen karakteri büyük harfe çevirir.



### ATOI VE ATOF FONKSİYONLARI

1. atoi Fonksiyonu: Karakter dizisi olarak verilen ifadeyi tam sayıya çevirir.

2. atof Fonksiyonu: Karakter dizisi olarak verilen ifadeyi ondalıklı sayıya çevirir.
	
<br /> <hr> <br />

- unsigned int ➡️ Tüm integer alanlar için kullanılan bir özelliktir. Sayısal alanlar için belirlenmiş uzunlukları vardır. Eğer integer alanı unsigned olarak belirlerseniz, ilgili alan negatif değer alamayacaktır.


- strcpy() fonksiyonu: 
<br /> Src parametresi ile gösterilen ve boş bir karakter ('\0') ile sonlandırılmış karakter dizisini, dest parametresi ile gösterilen ve boş bir karakter ('\0') ile sonlandırılmış karakter dizisinin yerine kopyalar.


- strncpy() fonksiyonu:
<br />	char *strncpy(char *dest, const char *src, size_t n); 
<br /> Eğer n değeri src adresindeki yazının uzunluğuna eşit ya da yazının uzunluğundan küçük ise, kopyalama yapılan yazının sonuna sonlandırıcı karakter eklenmez.


- isalpha() fonksiyonu:
<br /> Fonksiyona geçirilen c parametre değerinin alfabede bulunan bir harf olup olmadığını kontrol eder. Eğer karakter alfabede yer alan bir harf ise sıfır olmayan bir değer, aksi takdirde 0 değerini geri döndürür.

- isnumeric() fonksiyonu:
<br /> Bir değişkenin içeriğinin bir sayı olarak değerlendirilemeyeceğini anlamak için kullanılır.

- lowercase() fonksiyonu:
<br /> Bir dizenin küçük harfe dönüştürülmüş bir kopyasını döndürür.

- uppercase() fonksiyonu:
<br /> Bir dizenin büyük harfe dönüştürülmüş bir kopyasını döndürür.

- printable() fonksiyonu:
<br /> Yazdırılabilir karakter içeriyorsa return(1), içermiyorsa return(0) döndürür.

- strupcase() fonksiyonu:
<br /> Bütün harfleri büyük harfe dönüştürür.

- strlowercase() fonksiyonu:
<br /> Bütün harfleri küçük harfe dönüştürür.

- strcapitalize() fonksiyonu:
<br /> Tüm kelimelerin ilk harfini büyük harfe dönüştürür.

- strlcpy() fonksiyonu:
<br /> ('\0') ile sonlandırılan src dizesinden dest'e 1 karakter boyutuna kadar kopyalar ve sonucu ('\0') ile sonlandırılır.

- putstrnonprintable() fonksiyonu:
<br /> Yazdırılamaz karakter varsa onların önüne ters eğik "\" gelecek şekilde hexadecimal sistemde gösterir. (küçük harf)

- strcmp() fonksiyonu:
<br /> Str1 parametresi ile gösterilen karakter dizisini str2 parametresi ile gösterilen karakter dizisi ile karşılaştırır. Eğer her iki karakter dizisindeki tüm karakterler aynı ise sıfır değeri, aksi takdirde sıfırdan farklı bir değer geri döndürür.

- strncmp() fonksiyonu:
<br /> s1 adresindeki yazının ilk n karakteriyle, s2 adresindeki yazının ilk n karakterini birbirleriyle karşılaştırır. Yazıların ilk n karakteri aynı ise fonksiyon 0 değerine geri döner.

- strcat() fonksiyonu
<br /> Src parametresi ile gösterilen ve boş bir karakter ('\0') ile sonlandırılmış karakter dizisini, dest parametresi ile gösterilen ve boş bir karakter ('\0') ile sonlandırılmış karakter dizisinin sonuna ekleyerek yine boş bir karakter ('\0') ile sonlandırılmış bir karakter dizisi oluşturur.

- strncat() fonksiyonu:
<br /> char *strncat(char *dest, const char *source, size_t n); Fonksiyon dest adresindeki yazının sonuna source adresindeki yazının ilk n karakterini ekler.

- strstr() fonksiyonu: 
<br /> *strstr(const char *s1, const char *s2); Fonksiyon başlangıç adresi s1 olan yazı içinde başlangıç adresi s2 olan yazıyı arar. Eğer aranılan yazı bulunursa fonksiyonun geri dönüş değeri bulunan yerin adresidir.

- strlcat() fonksiyonu:
<br /> src dizesini dest'in sonuna ekler. dest size - strlen(dest) + 1 karakter ekler. dest size 0 olmadığı sürece ('\0') (NULL) döndürecektir.

- strlen() fonksiyonu:
<br /> str parametresi ile gösterilen karakter dizisini int 1 değere çevirir.

- putstr() fonksiyonu:
<br /> Dizeyi verilen çıktı birimine yazar.

- putnbr() fonksiyonu:
<br /> Number'ı verilen çıktı birimine yazar.

- atoi() fonksiyonu:
<br /> Str parametresi ile gösterilen karakter dizisini int bir değere çevirir. Fonksiyon, önce boşluk karakteri içermeyen ilk karakteri bulana kadar boşluk atlar. Daha sonra, bu karakterden başlayarak, int değer içeriğine benzeyen karakterleri sayısal değerlere çevirir.

- putnbr_base() fonksiyonu:
<br /> Bir sayıyı terminaldeki bir taban sisteminin içinde gösterir. Ondalık sayı 15'i, minimum uzunluk 10 olacak şekilde ikili tabana dönüştürür. Sonuç, dizeyi 10 karakter uzunluğunda yapmak için başında 6 sıfır bulunan 1111 olan 0000001111 olur.
	

### Rekürsif Fonksiyon Nedir?
- Kendi kendini çağıran fonksiyonlara özyineli (recursive) fonksiyon denir. Özyineleme en üstten başlayarak tabana kadar iner. Sonra tabanda bulduğu değeri geriye doğru en üste kadar taşır.
Kısaca kendisini kullanarak sonuç bulan fonksiyon tipidir.
	

### İteratif Fonksiyon Nedir?
- Fonksiyonun kendisini tekrar etmemesi durumunda döngülü (iterative) fonksiyonlara denir.
Kısaca basit, hantal ya da kendisine verilen görevi yerine getireye çalışan fonksiyonlar diyoruz yani sadece verilen işi yapar geriye bir şey döndürmez.
	
</details>
