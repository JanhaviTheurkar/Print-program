     
     
     #include<stdio.h>
     int sum(int a, int b);
     int main(){

     int sensor1, sensor2;

     printf("Enter reading from Senor1 :", sensor1);
     scanf("%d",&sensor1);

     printf("Enter reading from Sensor2 : ",sensor2);
     scanf("%d",&sensor2);

     printf("Sum of sensor reading=%d", sum(sensor1,sensor2));
     }

     int sum(int a, int b){
     return a + b;
     }
