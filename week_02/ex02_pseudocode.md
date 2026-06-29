BEGIN [ชื่อ A]
IF score >= 80 THEN grade = "A"
ELSE IF score >= 70 THEN grade = "B"
ELSE IF score >= 60 THEN grade = "C"
ELSE IF score >= 50 THEN grade = "D"
ELSE grade = "F"
END IF
OUTPUT grad


BEGIN [ชื่อ B]
INPUT A,B
IF A>B THEN
แสดงA
ELSE
แสดงB
END IF
END

BEGIN [ชื่อ C]
INPUT N
i = 1
FOR i FROM 1 TO n DO
พิมพ์ i
i = i + 1
END FOR
WHILE i <= n do
i = i + 1
END WHILE
