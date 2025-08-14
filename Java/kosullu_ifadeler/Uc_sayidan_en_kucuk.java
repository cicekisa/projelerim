public class Uc_sayidan_en_kucuk {
    public static void main(String[] args){
        int a=5,b=10,c=3;
        if(a<b && a<c){
            System.out.println("En kucuk sayi: " + a);
        } else if(b<a && b<c){
            System.out.println("En kucuk sayi: " + b);
        } else {
            System.out.println("En kucuk sayi: " + c);
        }
    }
}
