#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct mahasiswa
{
	char nama[50];
	char NPM[20];
	char kontak[20];
	char jurusan[50];
	char semester[20];
	char jmlh_sks[150];
	char email[50];
	
}mhs;
int menu;

int main()
{
	mhs rekap;
	int rubah;
	
	menu:
	system("cls");

	printf("----- PDDIKTI -----\n");
	printf("1. Menambahkan data baru\n");
	printf("2. Melihat data \n");
	printf("3. Update data\n");
	printf("4. Hapus data\n");
	printf("5. EXIT\n");
	printf("Silahkan pilih menu untuk melakukan proses : ");
	scanf("%d",&menu);
	switch(menu)
	{
		case 1:
			system("cls");
			fflush(stdin);
			printf("Masukkan Nama :");
			scanf(" %[^\n]%*c",&rekap.nama);
			printf("\nMasukkan NPM :");
			scanf(" %[^\n]%*c",&rekap.NPM);
			printf("\nMasukkan nomor HP :");
			scanf(" %[^\n]%*c",&rekap.kontak);
			printf("\nMasukkan Jurusan :");
			scanf(" %[^\n]%*c",&rekap.jurusan);
			printf("\nMasukkan Semester :");
			scanf(" %[^\n]%*c",&rekap.semester);
			printf("\nMasukkan Jumlah SKS :");
			scanf(" %[^\n]%*c",&rekap.jmlh_sks);
			printf("\nMasukkan email :");
			scanf(" %[^\n]%*c",&rekap.email);
			goto menu;
			break;
		case 2:
			system("cls");
			printf("Nama: %s\n", rekap.nama);
			printf("NPM: %s\n", rekap.NPM);
			printf("Nomor HP: %s\n", rekap.kontak);
			printf("Jurusan: %s\n", rekap.jurusan);
			printf("Semester: %s\n", rekap.semester);
			printf("Jumlah SKS: %s\n", rekap.jmlh_sks);
			printf("E-Mail: %s\n", rekap.email);
			break;
		case 3:
			system("cls");
			printf("1. Nama: %s\n", rekap.nama);
			printf("2. NPM: %s\n", rekap.NPM);
			printf("3. Nomor HP: %s\n", rekap.kontak);
			printf("4. Jurusan: %s\n", rekap.jurusan);
			printf("5. Semester: %s\n", rekap.semester);
			printf("6. Jumlah SKS: %s\n", rekap.jmlh_sks);
			printf("7. E-Mail: %s\n", rekap.email);
			
			printf("pilih data yang mau di ganti= ");
			scanf("%d",&rubah);
			if(rubah==1)
			{
				printf("\nNama : ");
				scanf(" %s",rekap.nama);
			}
			else if(rubah==2)
			{
				printf("\nNPM : ");
				scanf(" %s",rekap.NPM);	
			}
			else if(rubah==3)
			{
				printf("\nNomor HP : ");
				scanf(" %s",rekap.kontak);	
			}
			else if(rubah==4)
			{
				printf("\nJurusan : ");
				scanf(" %s",rekap.jurusan);	
			}
			else if(rubah==5)
			{
				printf("\nSemester : ");
				scanf(" %s",rekap.semester);	
			}
			else if(rubah==6)
			{
				printf("\nJumlah SKS : ");
				scanf(" %s",rekap.jmlh_sks);	
			}
			else if(rubah==7)
			{
				printf("\nE-Mail : ");
				scanf(" %s",rekap.email);	
			}
			else{
				printf("\npilihan salah");
			}
			
			printf("data berhasil diupdate");
			system("cls");
			goto menu;
			break;
		case 4:
			strcpy(rekap.nama,"");
			strcpy(rekap.NPM,"");
			strcpy(rekap.kontak,"");
			strcpy(rekap.jurusan,"");
			strcpy(rekap.semester,"");
			strcpy(rekap.jmlh_sks,"");
			strcpy(rekap.email,"");
			printf("data berhasil dihapus");
			system("cls");
			goto menu;
			break;
			system("cls");
			
	}

}
