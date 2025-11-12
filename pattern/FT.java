public class FT {
    public static void main(String args[]){
        int n = 1;
        for(int i = 0; i <= 5; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(n++);
            }
            System.out.print("\n");
        }
    }
}
