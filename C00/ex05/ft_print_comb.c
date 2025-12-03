#include <unistd.h>

void ft_print_comb(){

    char hundreds = '0';
    char tens = '1';
    char ones = '2';

    while(hundreds<=57){
        write(1,&hundreds,1);

        while(tens<=57){
            write(1,&tens,1);
            ones++;

                while(ones<=57){
                write(1,&ones,1);
                ones++;
                }
        }

        
        hundreds++;
    }
}

int main(){
    ft_print_comb();
    return 0;
}