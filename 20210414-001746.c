#include <stdio.h>

int main ()
{
  int accnt[3][2] = {
    {1935, 1935},
    {1234, 1234},
    {8611, 8611}

  };

    int id_1 = accnt[0][0];
    int pin_1 = accnt[0][1];

    int id_2 = accnt[1][0];
    int pin_2 = accnt[1][1];

    int id_3 = accnt[2][0];
    int pin_3 = accnt[2][1];


    printf ("Enter ID number: ");
    scanf("%d", &id_1, accnt);

    printf("Enter  Pin: ");
    scanf("%d", &pin_1, accnt);

if (id_1 == pin_1)

        {
            printf("\nYou Have Successfully Logged IN! \n");
            printf("ID#: %d\n", id_1);
        }
        else
        {
            printf("\nInvalid ID/PIN\n");
        }

return 0;


}