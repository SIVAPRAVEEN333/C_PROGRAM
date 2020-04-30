#ifndef STRING_S_H_
#define STRING_S_H_



int string_print(char*);
int string_length(char*);
char string_copy(char*,char*);
char string_reverse(char*,char*);
char string_concatenate(char*,char*,char*);
char string_compare(char*,char*);
int string_vowel(char*,int*,int*);
char string_vowel_check(char*);
char string_vowel_remove_1(char*,char*);
char string_vowel_remove_2(char*);
int char_vowel_check(char);
char char_swap(char*,char*);
char string_palindrome(char*);
char string_alpha_order_sort(char*);				//first argument is user/already given string second argument is to be store the function operation data/return data for future use
char *string_remove_expect_char(char*);
char *string_remove_spaces(char*);


#endif /* STRING_S_H_ */
