#include <stdio.h>
#include <float.h>

void GetOpperators(double* firstOpperant, double* secondOpperant)
{
  printf("Please enter Opperators\n");
  printf("First Opperant: ");
  scanf("%lf", firstOpperant);
  printf("Second Opperant: ");
  scanf("%lf", secondOpperant);
}
double Power(double firstOpperant, double secondOpperant)
{

    double result = 1;
    for (int i = 0; i < secondOpperant;i++) {
    result = result * firstOpperant;
  }
  return result;
}
double Divide(double firstOpperant, double secondOpperant)
{
  if (secondOpperant == 0) {
    printf("Division by Zero\n");
    do {
      printf("please enter a number for Second Opperant that is not null ");
      scanf("%lf",&secondOpperant);
    } while(secondOpperant == 0);
  }
  return firstOpperant / secondOpperant;
}
double Multiply(double firstOpperant, double secondOpperant)
{
  return firstOpperant * secondOpperant;
}
double Subtract(double firstOpperant, double secondOpperant)
{
  return firstOpperant - secondOpperant;
}
double Add(double firstOpperant, double secondOpperant)
{
  return firstOpperant + secondOpperant;
}
double performOpperation(int opperaton)
{
  double result = 0;
  switch (opperaton) {
    double firstOpperant;
    double secondOpperant;
    case 1:
      GetOpperators(&firstOpperant, &secondOpperant);
      result = Add(firstOpperant, secondOpperant);
      break;
    case 2:
      GetOpperators(&firstOpperant, &secondOpperant);
      result = Subtract(firstOpperant, secondOpperant);
      break;
    case 3:
      GetOpperators(&firstOpperant, &secondOpperant);
      result = Multiply(secondOpperant ,firstOpperant);
      break;
    case 4:
      GetOpperators(&firstOpperant, &secondOpperant);
      result = Divide(firstOpperant, secondOpperant);
      break;
    case 5:
      GetOpperators(&firstOpperant, &secondOpperant);
      result = Power(firstOpperant, secondOpperant);
      break;
    case -1:
      result = -1;
      break;
  }
  return result;
}

int menu()
{
  printf("Add(1)\n");
  printf("Subtract(2)\n");
  printf("Multiply(3)\n");
  printf("Divide(4)\n");
  printf("power(5)\n");
  printf("Stop Program(-1)\n");
  printf("Enter Opperaton :");

  int OpperatonType;
  scanf("%d",&OpperatonType);
  printf(" \n" );
  return OpperatonType;
}
int main(int argc, char const *argv[])
{
  double result = 0;
  do {
  int opperaton = menu();
  result = performOpperation(opperaton);
  if(opperaton != -1)
  {
  printf("Result: ");
  printf("%lf\n",result );
  }
  printf(" \n" );
  } while(result != -1);
 return 0;
}
