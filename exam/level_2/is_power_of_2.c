int is_power_of_2(unsigned int n) {
    if (n == 0) {
        return 0; // Zero nie jest potęgą dwójki
    }
    return (n & (n - 1)) == 0;
}
#include <stdio.h>
int main()
{
	printf("%d", is_power_of_2(16));
}