// import java.util.*;
public class character {
    public static void main(String args[]){
        // Scanner scan = new Scanner(System.in);
        int x  = 65;
        // scan.close();
        for(int i = 1; i <= 4; i++){
            for(int j = 1; j <= i; j++){
                System.out.print((char)(x++));
            }
            System.out.print("\n");
        }
    }
}
