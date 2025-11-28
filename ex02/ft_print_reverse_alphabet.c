#include <unistd.h>

void ft_print_reverse_alphabet(){
    char last = 'z';
    while(last>='a'){
        write(1,&last,1);
        last--;
    } 
}
