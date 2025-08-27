#include <stdio.h>

int main() {
    float score;

    // รับค่าคะแนนสอบ กลางภาค
    printf("กรอกคะแนนสอบ midterm: ");
    scanf("%f", &score);

    // ตรวจสอบเงื่อนไข ถ้าคะแนน >= 50 จะได้คะแนนเพิ่ม 5%
    if (score >= 50) {
        score = score + (score * 0.05);
    }

    // แสดงคะแนนรวมสุดท้าย
    printf("คะแนนรวม = %.2f\n", score);

    // แสดงข้อมูลสิ้นสุดการประเมิน
    printf("End of evaluation\n");

    return 0;
}