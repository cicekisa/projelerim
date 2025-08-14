import java.util.Scanner;

/*
Eğer şifre yanlış ise kullanıcıya şifresini sıfırlayıp sıfırlamayacağını
sorun, eğer kullanıcı sıfırlamak isterse yeni girdiği şifrenin unuttuğu 
şifre ile aynı olmaması gerektiğini kontrol edip, şifreler aynı ise ekrana
"Şifre oluşturulamadı, lütfen başka şifre giriniz." sorun yoksa 
"Şifre oluşturuldu" yazan programı yazınız.
 */
public class kullaniciGirisi {
    public static void main(String[] args) {
        String userName, password;

        Scanner input = new Scanner(System.in);

        System.out.println("Merhaba, lütfen kullanıcı adınızı giriniz:");
        userName = input.nextLine();

        System.out.println("Şimdi lütfen şifrenizi giriniz:");
        password = input.nextLine();

        if (userName.equals("patika") && password.equals("java123")) {
            System.out.println("Başarılı giriş yaptınız.");
        } else {
            System.out.println("Kullanıcı adı ya da şifrenizi hatalı girdiniz tekrar deneyiniz.");
        }

        System.out.println("Şifrenizi sıfırlamak ister misiniz? (Evet/Hayır)");
        String cevap = input.nextLine();

        String dogruSifre = "java123";  // Correct password for comparison
        if (cevap.equalsIgnoreCase("Hayır")) {
            System.out.println("Program sonlandırılıyor.");
            
        }
        if (cevap.equalsIgnoreCase("Evet")) {
            String yeniSifre;
          do{
            System.out.println("Lütfen yeni bir şifre Giriniz: ");
            yeniSifre = input.nextLine();

            if (yeniSifre.equals(dogruSifre)) {
                System.out.println("Şifre olusturulamadı, Lütfen baska bir şifre giriniz: ");
            } else {
                System.out.println("Şifre oluşturuldu.");
                dogruSifre = yeniSifre; // Update the correct password(dogru şifreyi guncelleyin)
                break; // Exit the loop if new password is valid(Yeni şifre gecerliyse donguden çıkın)
            }
        } while(true); // Continue until a valid password is entered
            
        }
        input.close();
    }
}
