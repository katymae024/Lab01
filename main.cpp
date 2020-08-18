#include <iostream>

int main() {
    int base;
    int power;
    int final = 1;
    printf("Enter a number and the power for it:    " );
    scanf("%d %d” , &base, &power);

if( base <= 0 || power <= 0)
{
	printf(" error");
}
Else
{
	printf("power ^ base");
}
int powFuction(int base, int power)
{
    int final = base ^ power;

}
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
