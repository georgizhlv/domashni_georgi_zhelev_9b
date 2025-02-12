#include <stdio.h>
#include <limits.h>
#include <stdint.h>

void main() {

    printf("%-12s %-10s %-6s %-20s %-20s %-10s %-20s\n", 
           "Type", "Format", "Size", "Signed Max", "Signed Min", "Unsigned", "Unsigned Max");

    printf("%-12s %-10s %-6zu %-20d %-20d %-10s %-20u\n",
           "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);

    printf("%-12s %-10s %-6zu %-20ld %-20ld %-10s %-20lu\n",
           "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);

    printf("%-12s %-10s %-6zu %-20lld %-20lld %-10s %-20llu\n",
           "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);

    printf("%-12s %-10s %-6zu %-20d %-20d %-10s %-20u\n",
           "short", "%d", sizeof(short), SHRT_MAX, SHRT_MIN, "%u", USHRT_MAX);

    printf("%-12s %-10s %-6zu %-20d %-20d %-10s %-20u\n",
           "char", "%d", sizeof(char), SCHAR_MAX, SCHAR_MIN, "%u", UCHAR_MAX);
}
