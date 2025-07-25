#include <stdio.h>

int main() {
// ข้อมูลส่วนบุคคล
char name[30] = "TAN"; // ชื่อเต็ม
int age = 19;
float height = 185.0;

// ข้อมูลผลการเรียน
char subject = 'E'; // E แทน English
float grade = 4.00;
char symbol = 'A';

// แสดงผลลัพธ์
printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);
printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

return 0;
}



