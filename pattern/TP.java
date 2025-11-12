public class TP {
    public static void main(String args[]){
        int n = 1, x = 1;
        for(int i = 1; i <= 5; i++){
            for(int j = 1; j <= i; j++){
                n++;
                if(n % 2 == 0){
                    x = 1;
                }else x = 0;
                System.out.print(x);
            }
            System.out.print("\n");
        }
    }
}
