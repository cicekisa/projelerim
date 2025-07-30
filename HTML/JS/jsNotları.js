//<button type="button" 
//onclick="document.getElementById('demo').style.display='none'">
//dokununca yazıyı kaybet</button>
//! ustteki kısımda butona tıkalyınca yazının kaybolmasını gosteriyor
//?---------------------------------------------------
//<button type="button"
//onclick="document.getElementById('demo').style.display
//='display'">basınca yazıyı geri getirir</button>
//! yukarıdaki yazıda butona tıklayınca yazıyı gosterir yazı oncesinde kaybollmussa da bos ekran seklinde gosterir
//?---------------------------------------------------
//<button type="button"
//onclick="document.getElementById('demo').style.display
//='block'">basınca yazıyı geri getirir</button>
//! yukarıdaki yazıda kaybolan yazıyı geri getiriyor ve kaybolan yazı yoksa da aynı sekilde kaliyor
//? ---------------------------------------------------
// function yazılırken head icerisine de body  icerisine de yazılabilir farketmez ikisinde de dogru calısır
//?---------------------------------------------
// hocaya sor// TODO javaScripte fonksiyonu head ya da body icerisine de yazdıgımızda ikiside dogru oluyor ama arasındaki fark ne,ne gibi farklılıklar ortaya cıkıyor
//?---------------------------------------------
//<script src="myScript.js"></script>
//! bu kullanımda src JS dosyasının kaynagını gosteriyor nereden geldigini falan ayrıyetten de js dosyasını nasıl HTML dosyasına baglayagımızı gosteriyor
//?-----------------------------------------------------
//!JS  GORUNTULEME OLANAKLARI
//JavaScript verileri farklı şekillerde "görüntüleyebilir":
//Bir HTML öğesine: innerHTML veya kullanarak yazma innerText. =>Bir HTML öğesine erişmek için
//HTML çıktısına şunu kullanarak yazıyoruz: document.write(): test amaclı kullanılır
//Uyarı kutusuna yazarak: window.alert().
//Tarayıcı konsoluna yazarak: console.log().
// innerHTML => aha sonra HTML öğesinin HTML içeriğini değiştirmek için özelliği kullanın :
//?------------------------------------------------------------
//var	    Bir değişken bildirir
//let	    Bir blok değişkeni bildirir
//const	    Bir blok sabiti bildirir
//if	    Bir koşulda yürütülecek bir ifade bloğunu işaretler
//switch   	Farklı durumlarda yürütülecek bir ifade bloğunu işaretler
//for	    Bir döngüde yürütülecek bir ifade bloğunu işaretler
//function	Bir fonksiyonu bildirir
//return	Bir fonksiyondan çıkar
//try	    Bir ifade bloğuna hata işleme uygular
//?------------------------------------------------------------------
//!var, let veya const ne zaman kullanılır?
//1. Değişkenleri her zaman bildirin
//2. constDeğerin değiştirilmemesi gerekiyorsa her zaman kullanın
//3. constTürün değiştirilmemesi gerekiyorsa her zaman kullanın (Diziler ve Nesneler)
//4. Sadece letkullanamayacaksanız kullanınconst
//5. Yalnızca vareski tarayıcıları desteklemeniz gerekiyorsa kullanın.