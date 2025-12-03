#include <unistd.h>

void ft_print_comb2(void)
{
    int left = 0;
    int right;
    char c;

    while (left <= 98)
    {
        right = left + 1;
        while (right <= 99)
        {
            
            c = '0' + (left / 10);
            write(1, &c, 1);
            c = '0' + (left % 10);
            write(1, &c, 1);

            write(1, " ", 1); 

            
            c = '0' + (right / 10);
            write(1, &c, 1);
            c = '0' + (right % 10);
            write(1, &c, 1);

            
            if (!(left == 98 && right == 99))
            {
                write(1, ", ", 2);
            }

            right++;
        }
        left++;
    }
}
