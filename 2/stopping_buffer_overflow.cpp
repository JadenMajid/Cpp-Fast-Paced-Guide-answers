#include <cstdio>


void write_to(char* chararr, unsigned int i, char c){
	if (i > sizeof(chararr)/sizeof(char)){return;}
	chararr[i] = c;
	return;
}

char read_from(char* chararr, unsigned int i){
	if (i > sizeof(chararr)/sizeof(char)){return 0;}
	return chararr[i];
}

int main(){
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = upper;



	lower[3] = 'd';
	upper_ptr[3] = 'D';

	char letter_d = read_from(lower, 3);

	printf("lower: %s\nupper: %s\n", lower, upper);
	write_to(lower, 7, 'g');
	printf("lower: %s\nupper: %s", lower, upper);
}
