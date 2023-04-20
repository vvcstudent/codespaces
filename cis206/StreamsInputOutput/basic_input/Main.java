import java.util.Scanner;
public class Main {
    public static void main(String [] args) {
        Scanner input = new Scanner(System.in);
        while (!input.hasNext("-1")) {
            //String str = input.next();
            int a = input.nextInt();
            int b = input.nextInt();
            System.out.println(a*b);
        }
    }
}