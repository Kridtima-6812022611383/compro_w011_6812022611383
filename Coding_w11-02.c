#include <stdio.h> //ประกาศใช้ไลบรารีมาตรฐาน

float average(int a, int b, int c){ //ประกาศเริ่มต้นนิยามฟังก์ชันชื่อ average ที่รับค่าพารามิเตอร์ 3 ตัวเเปรเเบบ int เเละส่งค่ากลับเป็น float
    float avg; //สร้างตัวเเปร avg เพื่อใช้เก็บค่าเฉลี่ย
    avg = (a + b + c) / 3.0; //นำค่าตัวเเปร a, b, c มาบวกกันเเล้วหารด้วย 3.0 เพื่อหาค่าเฉลี่ย เเล้วเก็บไว้ในตัวเเปร avg
    return avg;
}
int main(){  //ประกาศเป็นฟังก์ชันหลักของโปรเเกรม
    int math,physics,chemistry; //ประกาศตัวเเปรไว้เก้บคะเเนนเเต่ละรายวิชา
    float avg;
    printf("Enter math score: "); //แสดงข้อความ Enter math score:
    scanf("%d", &math); //รับค่าจากคีย์บอร์ดเเล้วเก็บไว้ในตัวเเปร math
    printf("Enter physics score: "); //แสดงข้อความ Enter physics score:
    scanf("%d", &physics); //รับค่าจากคีย์บอร์ดเเล้วเก็บไว้ในตัวเเปร physics
    printf("Enter chemistry score: "); //แสดงข้อความ Enter chemistry score:
    scanf("%d", &chemistry); //รับค่าจากคีย์บอร์ดเเล้วเก็บไว้ในตัวเเปร chemistry
    avg = average(math, physics, chemistry);//เรียกใช้ฟังก์ชัน average โดยส่งค่าตัวเเปร math, physics, chemistry ไปให้ฟังก์ชัน average เเล้วเก็บค่าที่ฟังก์ชันส่งกลับมาไว้ในตัวเเปร avg
    printf("Math = %d\n", math);  //พิมพ์ผลคะเเนนเเต่ละรายวิชา
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
    printf("Average = %.2f\n", avg); //เเสดงผลค่าเฉลี่ยโดยพิมพ์ทศนิยม 2 ตำแหน่ง
    return 0; //คืนค่า 0 เพื่อบอกว่าการทำงานของโปรเเกรมเสร็จสมบูณ์
}