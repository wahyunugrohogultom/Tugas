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
	mhs rekap[50];
	mhs temp;
	int rubah;
	int menu;
	int i=0;
	int j=0;
	int z;
	int a;
	char yb;
	
	menu:
	system("cls");

	printf("----- PDDIKTI -----\n");
	printf("1. Menambahkan data baru\n");
	printf("2. Melihat data \n");
	printf("3. Update data\n");
	printf("4. Hapus data\n");
	printf("5. Sorting\n");
	printf("6. Exit\n");
	printf("Silahkan pilih menu untuk melakukan proses : ");
	scanf("%d",&menu);
	switch(menu)
	{
		case 1:
			system ("cls");
			printf("masukkan jumlah data yang anda inginkan: ");
			scanf("%d", &a);
			for(i=1;i<=a;i++){
				printf("\n===== data mahasiswa ke %d =====", i);
				printf("\nNama\t\t: ");
				scanf(" %[^\n]%*c", rekap[i].nama);
				printf("NPM\t\t: ");
				scanf(" %[^\n]%*c", rekap[i].NPM);
				printf("Nomor HP\t: ");
				scanf(" %[^\n]%*c", rekap[i].kontak);
				printf("Jurusan\t\t: ");
				scanf(" %[^\n]%*c", rekap[i].jurusan);
				printf("Semester\t: ");
				scanf(" %[^\n]%*c", rekap[i].semester);
				printf("Jumlah SKS\t: ");
				scanf(" %[^\n]%*c", rekap[i].jmlh_sks);
				printf("E-mail\t\t: ");
				scanf(" %[^\n]%*c", rekap[i].email);
				
			}
			printf("\n");
			printf("Mau kembali ke pilihan (Y/T): ");
			scanf("%c", &yb);
			if(yb=='y'){
				goto menu;
			}
			break;
		case 2:
			system("cls");
			for(i=1;i<=a;i++){
			printf("\n===== data mahasiswa ke %d =====\n", i);
			printf("\nNama: %s\n", rekap[i].nama);
			printf("NPM: %s\n", rekap[i].NPM);
			printf("Nomor HP: %s\n", rekap[i].kontak);
			printf("Jurusan: %s\n", rekap[i].jurusan);
			printf("Semester: %s\n", rekap[i].semester);
			printf("Jumlah SKS: %s\n", rekap[i].jmlh_sks);
			printf("E-Mail: %s\n", rekap[i].email);
			
			}
			printf("\n");
			printf("Mau kembali ke pilihan (Y/T): ");
			scanf(" %c", &yb);
			if(yb=='y'){
			goto menu;
			}
			break;
		case 3:
			system("cls");
			for(i=1;i<=a;i++){
			printf("\n===== data mahasiswa ke %d =====\n", i);
			printf("1. Nama: %s\n", rekap[i].nama);
			printf("2. NPM: %s\n", rekap[i].NPM);
			printf("3. Nomor HP: %s\n", rekap[i].kontak);
			printf("4. Jurusan: %s\n", rekap[i].jurusan);
			printf("5. Semester: %s\n", rekap[i].semester);
			printf("6. Jumlah SKS: %s\n", rekap[i].jmlh_sks);
			printf("7. E-Mail: %s\n", rekap[i].email);
			}
			printf("\n");
			printf("data mahasiswa yang ingin diubah: ");
			scanf("%i", &i);
			system("cls");
			
			printf("-------------------------------\n");
			printf("1. Nama\t\t\t: %s\n", rekap[i].nama);
			printf("2. NPM\t\t\t: %s\n", rekap[i].NPM);
			printf("3. Nomor HP\t\t: %s\n", rekap[i].kontak);
			printf("4. Jurusan\t\t: %s\n", rekap[i].jurusan);
			printf("5. Semester\t\t: %s\n", rekap[i].semester);
			printf("6. Jumlah SKS\t\t\t: %s\n", rekap[i].jmlh_sks);
			printf("7. E-Mail\t\t: %s\n\n", rekap[i].email);
			printf("-------------------------------\n");

			printf("pilihlah bagian yang ingin di ubah: ");
			scanf("%d",&rubah);
			if(rubah==1)
			{
				printf("\nNama : ");
				scanf(" %s",rekap[i].nama);
			}
			else if(rubah==2)
			{
				printf("\nNPM : ");
				scanf(" %s",rekap[i].NPM);	
			}
			else if(rubah==3)
			{
				printf("\nNomor HP : ");
				scanf(" %s",rekap[i].kontak);	
			}
			else if(rubah==4)
			{
				printf("\nJurusan : ");
				scanf(" %s",rekap[i].jurusan);	
			}
			else if(rubah==5)
			{
				printf("\nSemester : ");
				scanf(" %s",rekap[i].semester);	
			}
			else if(rubah==6)
			{
				printf("\nJumlah SKS : ");
				scanf(" %s",rekap[i].jmlh_sks);	
			}
			else if(rubah==7)
			{
				printf("\nE-Mail : ");
				scanf(" %s",rekap[i].email);	
			}
			else{
				printf("\npilihan salah");
			}
			
			printf("Data berhasil diupdate\n");
			getch();
			goto menu;
			break;
		case 4:
			strcpy(rekap[i].nama,"");
			strcpy(rekap[i].NPM,"");
			strcpy(rekap[i].kontak,"");
			strcpy(rekap[i].jurusan,"");
			strcpy(rekap[i].semester,"");
			strcpy(rekap[i].jmlh_sks,"");
			strcpy(rekap[i].email,"");
			printf("data berhasil dihapus");
			system("cls");
			goto menu;
			break;
		case 5:
			if(i<=1){
				printf("data anda masukkan kurang");
				getch();
				goto menu;
			}
			else{
				for(i=0;i<=a;i++){
					for(z=0;z<=a-1;z++){
						if(strcmp(rekap[z].semester, rekap[z+1].semester)>0){
							temp = rekap[z];
							rekap[z] = rekap[z+1];
							rekap[z+1] = temp;
						}
						
					}
				}
			}
			goto menu;
			break;
	}
	return 0;
}
