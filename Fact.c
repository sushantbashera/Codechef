#include <gmp.h>
#include <stdio.h>

int main(int argc, char** argv) {
    mpz_t mynum;
    mpz_init(mynum);
    mpz_add_ui(mynum, 100);
    int i;
    for (i = 99; i > 1; i--) {
        mpz_mul_si(mynum, mynum, (long)i);
    }
    mpz_out_str(stdout, 10, mynum);
    return 0;
}
