#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"

void ex00()
{
	printf("%d", ft_iterative_factorial(10));
}
void ex01()
{
	printf("%d", ft_recursive_factorial(10));
}
void ex02()
{
	printf("%d", ft_iterative_power(5 , 6));
}
void ex03()
{
	printf("%d", ft_recursive_power(5 , 6));
}
void ex04()
{
	printf("%d", ft_fibonacci(5 , 6));
}
void ex05()
{

}
void ex06()
{

}
void ex07()
{

}
void ex08()
{

}




int main()
{
	ex01();
}