//To count the number between 1 to 100 which are not divisible by 2,3,5
#include<stdio.h>
int main()
{
    int count=0;
for (int i =1;i<=100; i++){
if (i%2!=0 && i % 3!=0 && i%5!=0){
    count++;
}


}
printf("count: %d\n",count);
return 0;
