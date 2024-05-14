#include "GLOBLE.h"
#include "conversion.cpp"
int str_to_int(string);
string int_to_str(int);
int indexOf(string,char);
string dectohex(int);
int hextodec(string);
string dectobin(int);
int bintodec(string);
int lenint(int);
int parity(int);
int insturctionPresent(string);
bool check0(string);
bool check1(string);
bool check2(string);
bool check3(string);
bool check4(string);
bool check5(string);
bool check6(string);
bool check7(string);
bool check8(string);
void check_flags_1(char);
void check_flags_2();
void check_carry(char);
void check_sign(char);
void check_zero(char);
void check_parity(char);
void check_auxilary(char);
void reset_flags();
void reset_registers();
void set_instructions_size();
void set_instructions();