#ifdef _WIN32
#include <stdlib.h> //pause at the end of the program
#endif
#ifdef __unix__
#include <stdlib.h> //pause at the end of the program
#endif
#include <stdio.h>
#define bsize 32 // buffer size

void write(FILE* src, FILE* out) {
	int i;
	char buffer[bsize];
	while(1) {
		int wq = fread(buffer, 1, bsize, src);
		for(i = 0; i < bsize; i++)
			buffer[i] ^= 0x84;
		if(fwrite(buffer, wq, 1, out) == 0)
			printf("failed to write to file\n");
		if(feof(src))
			break;
	}
	fclose(out);
	fclose(src);
	return;
}

void main() {
	FILE* src = fopen("nscript.dat", "r+b");
	if(src == NULL) {
		printf("unable to find/open nscript.dat, searching for nscript.txt...\n");
		src = fopen("nscript.txt", "r+b");
		if(src == NULL) {
			printf("not found. execution terminated\n");
			return;
		}
		FILE* out = fopen("nscript.dat", "w+b");
		if(out == NULL) {
			printf("unable to create output file\n");
			return;
		}
		write(src, out);
		printf("nscript.txt encrypted in nscript.dat\n");
		return;
	}
	FILE* out = fopen("nscript.txt", "w+b");
	write(src, out);
	printf("nscript.dat decrypted in nscript.txt\n");
	#ifdef _WIN32
	system("pause");
	#endif
	#ifdef __unix__
	system("bash -c 'read -r -p \"Press any key to continue...\" && command'");
	#endif
}
