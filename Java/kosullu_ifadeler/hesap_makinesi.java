import java.util.Scanner;

public class hesap_makinesi {
    public static void main(String[] args){
        Float sayi1= 10f,sayi2= 20f;
        char islem = '/' ; // + ,  - , * , / 

        Float sonuc = 0.0f;

        Scanner input = new Scanner(System.in);
        System.out.println("lütfen sayılar arasında yapılacak islemi giriniz: ");
        islem = input.nextLine().charAt(0);


        switch(islem) {
            case '+':
                sonuc =(float) sayi1 + sayi2;
                System.out.println("Sonuç: " + sonuc);
                break;
            case '-':
                sonuc =(float) sayi1 - sayi2;
                System.out.println("Sonuç: " + sonuc);
                break;
            case '*':
                sonuc =(float) sayi1 * sayi2;
                System.out.println("Sonuç: " + sonuc);
                break;
            case '/':
                // Check if the second number is not zero to avoid division by zero
                if(sayi2 != 0){
                    sonuc =(Float) sayi1 / sayi2;
                    System.out.println("sonuc: " + sonuc);
                    break;
                }
                else{
                    System.out.println("Bolme islemi için ikinci sayi sıfır olamaz");
                }         
                input.close();
                break;

        }

    }
}
