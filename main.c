//
// Created by 沈世军 on 16/1/2.
//

#include <stdio.h>
#include <stdint.h>

int main() {
    printf("int64_t => %lu", sizeof(int64_t));
    printf("int8_t => %lu", sizeof(int8_t));
    printf("int_fast64_t => %lu", sizeof(int_fast64_t));
    printf("int_least64_t => %lu", sizeof(int_least64_t));
    printf("intmax_t => %lu", sizeof(intmax_t));
    printf("intptr_t => %lu", sizeof(intptr_t));
    printf("uint64_t => %lu", sizeof(uint64_t));
    printf("uint_fast64_t => %lu", sizeof(uint_fast64_t));
    printf("uint_least64_t => %lu", sizeof(uint_least64_t));
    printf("uintmax_t => %lu", sizeof(uintmax_t));
    printf("uintptr_t => %lu", sizeof(uintptr_t));
}