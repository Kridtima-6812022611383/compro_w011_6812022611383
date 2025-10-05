#include <stdio.h> //ประกาศใช้ไลบรารีมาตรฐาน

void inputscores(float arr[3][3]){ //สร้างฟังก์ชันชื่อ inputscore รับพารามิเตอร์เป็นอาเรย์ 2 มิติขนาด 3 คน 3 วิชา
    for (int i = 0; i < 3; i++){ //ใช้ลูป for เพื่อรับคะเเนนของนักเรียน 3 คน
        printf("Enter scores for student %d:\n", i + 1); //เเสดงข้อความว่ารับคะเเนนของนักเรียนคนที่เท่าไหร่
        printf("Math: "); //รับคะเเนนวิชา Math เเล้วเก็บไว้ในตำเเหน่งที่ 0 ของอาเรย์
        scanf("%f", &arr[i][0]);
        printf("Physics: "); //รับคะเเนนวิชา Physics เเล้วเก็บไว้ในตำเเหน่งที่ 1 ของอาเรย์
        scanf("%f", &arr[i][1]);
        printf("Chemistry: "); //รับคะเเนนวิชา Chemistry เเล้วเก็บไว้ในตำเเหน่งที่ 2 ของอาเรย์
        scanf("%f", &arr[i][2]);
        printf("\n"); //ขึ้นบรรทัดใหม่
    }
}
void printtable(float arr[3][3]){ //ฟังก์ชันสำหรับพิมพ์ตารางคะเเนน
    printf("Score Table:\n");
    printf("Student   Math   Physics   Chemistry\n"); //หัวตาราง
    for (int i = 0; i < 3; i++){ //ใช้ลูป for เพื่อพิมพ์คะเเนนของนักเรียน 3 คน
        printf("%d\t %5.2f\t %5.2f\t %7.2f\n", i + 1, arr[i][0], arr[i][1], arr[i][2]); //เเสดงคะเเนนของนักเรียนเเต่ละคนในตาราง
    }
    printf("\n");
}
void printaverage(float arr[3][3]){ //ประกาศตัวเเประเก็บผลรวมของเเต่ละวิชาเริ่มต้นที่ 0
    float math_avg = 0, phy_avg = 0, chem_avg = 0;
    for (int i = 0; i < 3; i++){ //วนลูปบวกคะเเนของนักเรียนทั้ง 3 คน เพื่อหาผลรวมของเเต่ละวิชา
        math_avg += arr[i][0];
        phy_avg += arr[i][1];
        chem_avg += arr[i][2];
    }
    math_avg /= 3.0; //หารด้วย 3.0 เพื่อหาค่าเฉลี่ยของเเต่ละวิชา
    phy_avg /= 3.0;
    chem_avg /= 3.0;
    printf("Average per subject:\n"); //เเสดงผลค่าเแลี่ยของเเต่ละวิชา โดยพิมพ์ทศนิยม 2 ตำแหน่ง
    printf("Math: %.2f\n", math_avg);
    printf("Physics: %.2f\n", phy_avg);
    printf("Chemistry: %.2f\n", chem_avg);
}
int main(){ //ฟังก์ชันหลักของโปรเเกรม
    float scores[3][3]; //ประกาศอาเรย์ 2 มิติขนาด 3 คน 3 วิชา เพื่อเก็บคะเเนน
    inputscores(scores); //เรียกใช้ฟังก์ชัน inputscores เพื่อรับคะเเนน
    printtable(scores); //เรียกใช้ฟังก์ชัน printtable เพื่อพิมพ์ตารางคะเเนน
    printaverage(scores); //เรียกใช้ฟังก์ชัน printaverage เพื่อพิมพ์ค่าเฉลี่ยของเเต่ละวิชา
    return 0;   //คืนค่า 0 เพื่อบอกว่าการทำงานของโปรเเกรมเสร็จสมบูณ์
}