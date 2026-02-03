#include<stdio.h>
/*2. The main function: program entry point.
    - returns an int (status code) to the operating system.
    - on most system returning 0 means "success". */
int main(){
    int a = 10;                 /* 3. Declare an integer variable 'a' and initialzie it to 10
                                    - int typically occupies 4 bytes on modern system 
                                    and stores whole numbers (no fractional part) */
    float b = a;                /* 4. Declare a float variable "b" and initallizw it with "a"
                                    - this is an implicit conversion (int -> float).
                                    - the integer value 10 is converted to the floating point value 10.0f
                                    - 'float' typically stores ~6-7 decimal digits of precision.*/
    double c = b ;              /* 5. Declare a double variable 'c' and intialize it with 'b'.
                                      this is another implicit conversion (float -> double).
                                    - 'double' usually has ~15-16 decimal digits of precision.
                                    - converting float -> double preserves the float value but 
                                      fills it into a wider format (no new fractional info). */
    printf(" a (int) = %d\n", a); /* 6. print integer "a".
                                                 - "%d" is the format specifier for signed int.
                                                 - 'a' is passed as a int argument.*/
    printf(" b (float, implicit) = %f\n" , b); /* 7. print float 'b' using "%f".
                                                  important: in a variadic finction like printf, float arguments 
                                                  are promoted to double. so 'b' (float) is promoted to double when 
                                                  passed and "%f" execpts a double, so this is correct.*/
    printf("c (double,implicit) = %1f \n", c); 
    printf("this is a changed file");
    return 0 ;

}
