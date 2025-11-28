#include <unistd.h>

void ft_print_alphabet(){
    char one = 'a';
    while(one <= 'z'){
        write(1,&one,1);
        one++;
    }
    
}
