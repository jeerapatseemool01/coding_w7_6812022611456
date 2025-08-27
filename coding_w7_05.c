#include <stdio.h>

int main() {
    int age, vip;
    float amount, discount = 0.0, finalAmount;

    // รับค่าข้อมูลจากผู้ใช้งานผ่านแป้นพิมพ์
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP Level (1-5): ");
    scanf("%d", &vip);

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    // ตรวจสอบเงื่อนไขการลดราคา
    if (age > 60 && vip >= 3) {
        discount = 20.0;
    } else if (age >= 30 && age <= 40 && amount >= 2000) {
        discount = 15.0;
    } else if (age >= 18 && age <= 25 && amount >= 1000) {
        discount = 10.0;
    } else if (vip == 5 && amount >= 50000) {
        discount = 25.0;
    } else {
        discount = 0.0;
    }

    // คำนวณราคา
    finalAmount = amount - (amount * discount / 100.0);

    // แสดงผลลัพธ์
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip, amount);

    if (discount > 0) {
        printf("Discount received: %.0f%%\n", discount);
        printf("Final amount to pay: %.2f THB\n", finalAmount);
    } else {
        printf("No discount applies!\n");
        printf("Final amount to pay: %.2f THB\n", finalAmount);
    }

    printf("\nThank you for shopping with us!\n");

    return 0;
}
