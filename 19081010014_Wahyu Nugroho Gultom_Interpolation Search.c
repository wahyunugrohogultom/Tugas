#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

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
	int pencarian;
	int ketemu=0;
	char NPM[20];
	int sorting;
	int akhir;
	int tengah;
	int awal=0;
	int low, high;
	int flag=0;
	float pos1;
	int pos, n=9;
	
	
	
	menu:
	system("cls");

	printf("----- PDDIKTI -----\n");
	printf("1. Menambahkan data baru\n");
	printf("2. Melihat data \n");
	printf("3. Update data\n");
	printf("4. Hapus data\n");
	printf("5. Sorting\n");
	printf("6. Pencarian\n");
	printf("7. Exit\n");
	printf("Silahkan pilih menu untuk melakukan proses : ");
	scanf("%d",&menu);
	switch(menu)
	{
		case 1:
			system ("cls");
			printf("Masukkan Jumlah Data yang Anda Inginkan: ");
			scanf("%d", &a);
			for(i=1;i<=a;i++){
				printf("\n***** Data Mahasiswa Ke %d *****", i);
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
			printf("Mau Kembali Ke Menu (Y/T): ");
			scanf("%c", &yb);
			if(yb=='y'){
				goto menu;
			}
			break;
		case 2:
			system("cls");
			for(i=1;i<=a;i++){
			printf("\n***** data mahasiswa ke %d *****\n", i);
			printf("\nNama: %s\n", rekap[i].nama);
			printf("NPM: %s\n", rekap[i].NPM);
			printf("Nomor HP: %s\n", rekap[i].kontak);
			printf("Jurusan: %s\n", rekap[i].jurusan);
			printf("Semester: %s\n", rekap[i].semester);
			printf("Jumlah SKS: %s\n", rekap[i].jmlh_sks);
			printf("E-Mail: %s\n", rekap[i].email);
			
			}
			printf("\n");
			printf("Mau kembali Ke Menu (Y/T): ");
			scanf(" %c", &yb);
			if(yb=='y'){
			goto menu;
			}
			break;
		case 3:
			system("cls");
			for(i=1;i<=a;i++){
			printf("\n***** Data Mahasiswa Ke %d *****\n", i);
			printf("1. Nama: %s\n", rekap[i].nama);
			printf("2. NPM: %s\n", rekap[i].NPM);
			printf("3. Nomor HP: %s\n", rekap[i].kontak);
			printf("4. Jurusan: %s\n", rekap[i].jurusan);
			printf("5. Semester: %s\n", rekap[i].semester);
			printf("6. Jumlah SKS: %s\n", rekap[i].jmlh_sks);
			printf("7. E-Mail: %s\n", rekap[i].email);
			}
			printf("\n");
			printf("Data Mahasiswa yang Ingin Diubah: ");
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

			printf("Pilihlah Bagian yang Ingin di Ubah: ");
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
			
			printf("Data berhasil Diupdate\n");
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
			printf("Data Berhasil Dihapus");
			system("cls");
			goto menu;
			break;
		case 5:
			if(i<=1){
				printf("Data yang Anda Masukkan Kurang");
				getch();
				goto menu;
			}
			else{
				for(i=0;i<=a;i++){
					for(z=0;z<=a-1;z++){
						if(strcmp(rekap[z].NPM, rekap[z+1].NPM)>0){
							temp = rekap[z];
							rekap[z] = rekap[z+1];
							rekap[z+1] = temp;
						}
						
					}
				}
			}
			goto menu;
			break;
		case 6:
			printf("\nJenis Search\n");
			printf("1.Sequential search\n");
			printf("2.Binary search\n");
			printf("3.Interpolation Search\n");
			printf("Pilih Jenis Pencarian: ");
			scanf("%d",&pencarian);
			if(pencarian==1){
				
				printf("Data Yang Ingin Dicari: ");
				scanf(" %[^\n]%*c",&NPM);
				
				z=0;
				while(z<=i-1 && ketemu==0){
					if(strcmp(rekap[z].NPM,NPM)==0){
						ketemu=z+1;
						break;
					}
					else{
						z=z+1;
					}
				}
				printf("\n");
				if (ketemu==0){
					printf("Tidak Ketemu\n");
				}
				else{
					printf("NPM %s Ketemu Pada Indeks Ke %d\n", NPM,ketemu-1);
					printf("***** Data Mahasiswa Ke %d *****", ketemu-1);
					printf("\nNama\t\t: %s\n", rekap[ketemu-1].nama);
					printf("NPM\t\t: %s\n", rekap[ketemu-1].NPM);
					printf("Kontak\t\t: %s\n", rekap[ketemu-1].kontak);
					printf("Jurusan\t\t: %s\n", rekap[ketemu-1].jurusan);
					printf("Semester\t: %s\n", rekap[ketemu-1].semester);
					printf("Jumlah SKS\t: %s\n", rekap[ketemu-1].jmlh_sks);
					printf("E-Mail\t\t: %s\n", rekap[ketemu-1].email);
					printf("===============================\n\n");
				}
			}
			else if(pencarian==2){
					printf("Data yang Ingin Dicari: ");
					scanf(" %[^\n]%*c", &NPM);
					akhir=a;
					tengah=(awal+akhir)/2; 
					while(ketemu==0&&awal<=akhir){
						if(strcmp(rekap[tengah].NPM,NPM)>0){
							akhir=tengah-1;
						}
						else if(strcmp(rekap[tengah].NPM,NPM)<0){
							awal=tengah+1;
						}
						else if(strcmp(rekap[tengah].NPM,NPM)==0){
							ketemu=tengah+1;
							break;
						}
						tengah=(awal+akhir)/2;
					}
					printf("\n");
					if (ketemu==0){
						printf("tidak ketemu\n");
					}
					else{
						printf("NPM %s Ketemu Pada Indeks Ke %d\n", NPM,ketemu-1);
						printf("***** Data Mahasiswa Ke %d *****", ketemu-1);
						printf("\nNama\t\t: %s\n", rekap[ketemu-1].nama);
						printf("NPM\t\t: %s\n", rekap[ketemu-1].NPM);
						printf("Kontak\t\t: %s\n", rekap[ketemu-1].kontak);
						printf("Jurusan\t\t: %s\n", rekap[ketemu-1].jurusan);
						printf("Semester\t: %s\n", rekap[ketemu-1].semester);
						printf("Jumlah SKS\t: %s\n", rekap[ketemu-1].jmlh_sks);
						printf("E-Mail\t\t: %s\n", rekap[ketemu-1].email);
					}
				
				}
				else if(pencarian==3){
					printf("Data yang ingin di cari: ");
					scanf(" %[^\n]%*c",&NPM);
					low=0;
					high=i-1;
					for(i=0;i<=a;i++){
						for(z=0;z<=a-1;z++){	
							if(strcmp(rekap[z].NPM, rekap[z+1].NPM)>0){
								temp = rekap[z];
								rekap[z] = rekap[z+1];
								rekap[z+1] = temp;
							}
						
						}
					}
					do{
						pos1=(float)strcmp(NPM,rekap[low].NPM)/strcmp(rekap[high].NPM,rekap[low].NPM)*(high-low) + low;
						pos= floor(pos1);
					
						if(strcmp(rekap[pos].NPM,NPM)==0){
					
							flag=pos;
							break;
						}
						if (strcmp(rekap[pos].NPM,NPM) > 0) high = pos-1;
						else
							if(strcmp(rekap[pos].NPM,NPM) < 0 ) low = pos+1;
					} while((strcmp(NPM,rekap[low].NPM) >=0)&&(strcmp(NPM,rekap[high].NPM)<=0)); 
					if(flag==0)
						printf("data tidak ada\n");
					else{
					
						printf("data ada\n");
						printf("NPM %s Ketemu Pada Indeks Ke %d\n", NPM,flag);
						printf("***** Data Mahasiswa Ke %d *****", flag);
						printf("\nNama\t\t: %s\n", rekap[flag].nama);
						printf("NPM\t\t: %s\n", rekap[flag].NPM);
						printf("Kontak\t\t: %s\n", rekap[flag].kontak);
						printf("Jurusan\t\t: %s\n", rekap[flag].jurusan);
						printf("Semester\t: %s\n", rekap[flag].semester);
						printf("Jumlah SKS\t: %s\n", rekap[flag].jmlh_sks);
						printf("E-Mail\t\t: %s\n", rekap[flag].email);
					}
				}
				
				printf("Silahkan Tekan Apapun Untuk Kembali Ke Menu");
				getch();
     			goto menu;
     			
	}
	return 0;
}
