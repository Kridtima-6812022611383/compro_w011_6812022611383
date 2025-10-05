#include <stdio.h> //ประกาศใช้ไลบรารีมาตรฐาน

void inputandshow(){ //ประกาศเริ่มต้นนิยามฟังก์ชันชื่อ inputandshow void จะทำให้้ฟังก์ชันนี้ไม่ส่งค่ากลับ
    int math, physics, chemistry; //ประกาศตัวเเปรเเบบ int 3 ตัว ใช้ในฟังก์ชันนี้เท่านั้น
    printf("Enter Math: "); //แสดงข้อความ Enter Math:
    scanf("%d", &math); //รับค่าจากคีย์บอร์ดเเล้วเก็บไว้ในตัวเเปร math
    printf("Enter Physics: "); //แสดงข้อความ Enter Physics:
    scanf("%d", &physics); //รับค่าจากคีย์บอร์ดเเล้วเก็บไว้ในตัวเเปร physics
    printf("Enter Chemistry: "); //แสดงข้อความ Enter Chemistry:
    scanf("%d", &chemistry); //รับค่าจากคีย์บอร์ดเเล้วเก็บไว้ในตัวเเปร chemistry
    printf("Scores: Math = %d, Physics = %d, Chemistry = %d\n",math, physics, chemistry); 
    //พิมพ์ผลคะเเนนทั้งหมมดในบรรทัดเดียว 
}
int main(){ //ประกาศเป็นฟังก์ชันหลักของโปรเเกรม เมื่อโปรเเกรมทำงานจะเริ่มจากตรงนี้เเละคืนค่า int เมื่อสิ้นสุดการทำงาน
    inputandshow(); //เรียกใช้ฟังก์ชัน inputandshow ที่ประกาศไว้ข้างบน
    return 0; //คืนค่า 0 เพื่อบอกว่าการทำงานของโปรเเกรมเสร็จสมบูรณ์
}
