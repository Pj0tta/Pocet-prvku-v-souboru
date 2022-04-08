#include <stdio.h>

int main() {
	int pocet[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int cisla[10];
	int znak = 0;
	int cislo = 0;


	FILE* soubor = fopen("soubor.txt", "r");


	if (soubor == NULL) {
		printf("Soubor nelze otevrit");
		return 1;
	}


	while (!feof(soubor)) {
		fscanf(soubor, "%d", &cisla[znak]);
		znak++;
	}
	for (int i = 0; i < 10; i++) {
		cislo = cisla[i];
		pocet[cislo]++;
	}
	for (int i = 0; i < 10; i++) printf("Cislo %d je v souboru %dx\n", i, pocet[i]);


	return(0);
}
