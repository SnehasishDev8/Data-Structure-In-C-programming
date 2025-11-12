#include<stdio.h>
int main(){
   char arr[40];
   printf("Enter a string : ");
   scanf("%[^\n]s",arr);
   int i = 0, count = 0;
   while(arr[i++] != '\0'){
        count++;
   }
   int flag = 1;
   for(int i = 0; i < count/2; i++){
        if(arr[i] != arr[count - i - 1]){
            flag = 0;
            break;
        }
        int temp = arr[i];
        arr[i] = arr[count - i - 1];
        arr[count - i - 1] = temp;
   }

   if(flag == 0) printf("Not pallindrom\n");
   printf("%s",arr);
}