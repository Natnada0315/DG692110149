# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function                                    | ทำหน้าที่                                                 | Returns                      |
| ------------------------------------------- | ------------------------------------------------------------------ | ---------------------------- |
| `int clamp(int value, int min, int max)`  | จำกัดค่า value ให้อยู่ระหว่าง min และ max | ค่าที่ clamp แล้ว  |
| `float lerp(float a, float b, float t)`   | Linear interpolation ระหว่าง a และ b ตาม t            | ค่าที่คำนวณได้ |
| `int randomRange(int min, int max)`       | สุ่มตัวเลขระหว่าง min และ max                  | ค่าสุ่ม               |
| `float percentOf(int current, int total)` | คำนวณเปอร์เซ็นต์                                   | ค่าเปอร์เซ็นต์ |

## คำถาม Reflection — Exercise 2

### 2.1 `clamp` — Pass by Value

**คำถาม:** ทำไม `hp` ใน `main()` ถึงยังเป็น 150 ทั้งที่ `value` ใน `clamp()` ถูกเขียนทับเป็น 100 ไปแล้ว?

**คำตอบ:** เพราะ ตัวแปรที่จะใช้ clamp เปลี่ยนค่าเป็นคนละชื่อตัวแปรกับของตัวแปร hp ตัวแปร hp เป็นเหมือนตัว copy ที่จะเอาไว้ใช้ให้ selfHp โดนเปลี่ยนค่าเฉย ๆ

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ:** เพราะ result ถูกประกาศในตัวแปรของ lerp ซึ่งเป็นคนละส่วนกันกับของ Main สังเกตได้จากคู่วงเล็บก็สามารถบอกได้

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ:** เพราะ โปรแกรมส่งค่าของ dicemin ไปที่ min ไม่ได้เปลี่ยนค่าของ dicemin แค่เอาไปให้เฉย ๆ 

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ:** เพราะ ค่าของ current ที่เปลี่ยนใน percentof() อยู่กันคนละห้องกับของใน main และ score ก็ถูกกำหนดค่าไว้ใน main แล้ว ซึ่งมันอยู่กันคนละวงเล็บ
