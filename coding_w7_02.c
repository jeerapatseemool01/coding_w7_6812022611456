#include <stdio.h>

int main() {
    int x, y;

    // รับค่าตัวเลขจากผู้ใช้แป้นพิมพ์
    printf("กรอกค่า x: ");
    scanf("%d", &x);
    printf("กรอกค่า y: ");
    scanf("%d", &y);

    // เปรียบเทียบเเละทําการคํานวณค่ามากกว่าน้อยกว่า
    if (x > y) {
        printf("x มากกว่า y\n");
    } else if (x < y) {
        printf("x น้อยกว่า y\n");
    } else {
        printf("x เท่ากับ y\n");
    }

    return 0;
}