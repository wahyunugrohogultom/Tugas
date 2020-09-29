#include <stdio.h>

typedef struct PDDIKTI
{
	char nama[50];
	char NPM[20];
	char perguruan_tinggi[50];
	char jurusan[50];
	char semester[20];
};

int main(void)
{
	struct PDDIKTI mhs;
	
	printf("Masukkan Nama 	 : ");
	gets(mhs.nama);
	printf("Masukkan NPM 	 : ");
	gets(mhs.NPM);
	printf("Masukkan PTN	 : ");
	gets(mhs.perguruan_tinggi);
	printf("Masukkan Jurusan : ");
	gets(mhs.jurusan);
	printf("Masukkan Semester: ");
	gets(mhs.semester);
	
	printf("\n- Data Mahasiswa -\n");
	printf("Nama    : %s\n",mhs.nama);
	printf("NPM     : %s\n",mhs.NPM);
	printf("PTN     : %s\n",mhs.perguruan_tinggi);
	printf("Jurusan : %s\n",mhs.jurusan);
	printf("Semester: %s\n",mhs.semester);
	
	return 0;
}
