#include <stdio.h>
#define bsize 32 // read/write buffer size

void write(FILE* src, FILE* out) {
	int i;
	char buffer[bsize];
	while(1) {
		int wq = fread(buffer, 1, bsize, src);
		for(i = 0; i < (wq >= bsize) ? bsize : wq; i++)
			buffer[i] ^= 0x84; //the algorithm inverts the 8th and 3rd bit (from right to left) in every single byte
		if(fwrite(buffer, wq, 1, out) == 0) {
			puts("failed to write to file");
			exit(1);
		}
		if(feof(src))
			break;
	}
	fclose(out);
	fclose(src);
	return;
}

int main(void) {
	FILE* src = fopen("nscript.dat", "r+b");
	if(src == NULL) {
		puts("unable to find/open nscript.dat, searching for nscript.txt...");
		src = fopen("nscript.txt", "r+b");
		if(src == NULL) {
			puts("no suitable files found. execution terminated");
			return 1;
		}
		FILE* out = fopen("nscript.dat", "w+b");
		if(out == NULL) {
			puts("unable to create output file");
			return 1;
		}
		write(src, out);
		puts("nscript.txt encrypted in nscript.dat");
		puts("Press any key to continue...");
		return 0;
	}
	FILE* out = fopen("nscript.txt", "w+b");
	write(src, out);
	printf("nscript.dat decrypted in nscript.txt");
	puts("Press any key to continue");
	getchar();
	return 0;
}
