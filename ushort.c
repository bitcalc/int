/* From Secure Coding in C and C++ */

int main(int argc, char *argv[]) {
    unsigned short int total;
    total = strlen(argv[1])+strlen(argv[2])+1;
    char *buff = (char *)malloc(total);
    strcpy(buff, argv[1]);
    strcat(buff, argv[2]);
}
