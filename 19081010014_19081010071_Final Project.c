#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define RANGE 255

struct laundry{
	char nama[50];
	char waktu_input[50];
	char jumlah[20];
	char nohp[15];
	char alamat[50];
	
};

typedef struct laundry lndr;
lndr temp, data_lndr[]={
{"Joni Bastian", "1-1-2021", "5", "0822789673", "Rungkut asri surabaya"},
{"Yanuar Fitroni", "2-1-2021", "7", "0822736875", "Perum ikip gunung anyar"},
{"Dafa Ardiansyah", "7-1-2021", "8", "0812342345", "Sidoarjo"},
{"Wahyu Nugroho", "5-1-2021", "3", "0825767518", "Sidoarjo"}
};

struct member{
	char namem[50];
	int memb;
};

typedef struct member mem;
mem tem, data_mem[]={
{"Joni Bastian", 101},
{"Yanuar Fitroni", 128},
{"Wahyu Nugroho", 111}
};

int data=0;

void insert(char nama[50],
			char waktu_input[50],
			char jumlah[20],
			char nohp[15],
			char alamat[50]){
			
		strcpy(data_lndr[data].nama, nama);
		strcpy(data_lndr[data].waktu_input, waktu_input);
		strcpy(data_lndr[data].jumlah, jumlah);
		strcpy(data_lndr[data].nohp, nohp);
		strcpy(data_lndr[data].alamat, alamat);
		data++;
}

void update(int data,
			char nama[50],
			char waktu_input[50],
			char jumlah[20],
			char nohp[15],
			char alamat[50]){
			
		strcpy(data_lndr[data].nama, nama);
		strcpy(data_lndr[data].waktu_input, waktu_input);
		strcpy(data_lndr[data].jumlah, jumlah);
		strcpy(data_lndr[data].nohp, nohp);
		strcpy(data_lndr[data].alamat, alamat);
}
	
void delete(int nomor){
	int i=0;
	for(i=0;i<data;i++){
		if(i==nomor){
			int y=0;
			for(y=i;y<data-1;y++){
				data_lndr[y]=data_lndr[y+1];
			}
			data--;
			break;
		}
	}
}

void counting_sort(int A[], int k, int n){
    int i, j;
    int B[15], C[100];
    for (i = 0; i <= k; i++)
        C[i] = 0;
    for (j = 1; j <= n; j++)
        C[A[j]] = C[A[j]] + 1;
    for (i = 1; i <= k; i++)
        C[i] = C[i] + C[i-1];
    for (j = n; j >= 1; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
    printf("\n\nAntrian yang sudah diurutkan : ");
    for (i = 1; i <= n; i++)
        printf("%d ", B[i]);
}


void newmember(char namem[100],
				int memb){
			
		strcpy(data_mem[data].namem, namem);
		data_mem[data].memb, memb;
		data++;
}

void member(int quest){
	int total;
	int diskon;
	int bayar;
	int berat;
	int harga=6000;
	
		printf("\nBerapa Berat Pakaian Laundry : ");
		scanf("%d", &berat);
		
		total = berat * harga;
		diskon = berat * harga * 0.1;
		bayar = total - diskon;
		
		printf("Jumlah uang yang harus Anda Bayar berjumlah : %i \n", total);
}

void reguler(int mem){
	int berat;
	int bayar;
	int harga=6000;
	
	printf("\nBerapa Berat Pakaian Laundry : ");
	scanf("%d", &berat);
	
	bayar = berat * harga;
	
	printf("Jumlah uang yang harus Anda Bayar berjumlah : %d \n", bayar);	
}


void view(){
	
	int i;
	if(data>0){
		for(i=0;i<data;i++){
			printf("=======================================================================\n");
			printf("Data ke \t\t: %d\n",i+1);
			printf("Nama \t\t\t: %s\n",data_lndr[i].nama);	
			printf("Waktu Input \t\t: %s\n",data_lndr[i].waktu_input);
			printf("Jumlah Barang \t\t: %s\n",data_lndr[i].jumlah);
			printf("No. Handphone \t\t: %s\n",data_lndr[i].nohp);
			printf("Alamat \t\t\t: %s\n",data_lndr[i].alamat);
		}
	}else{
		printf("Tidak ADA DATA\n");
	}printf("\n");
}

void viewmember(){
	
	int i;
	if(data>0){
		for(i=0;i<data;i++){
			printf("=======================================================================\n");
			printf("Data ke \t\t: %d\n",i+1);
			printf("Nama \t\t\t: %s\n",data_mem[i].namem);	
			printf("ID Member \t\t: %d\n",data_mem[i].memb);
		}
	}else{
		printf("Tidak ADA DATA\n");
	}printf("\n");
}

int main(void){
	
	system("color 70");
	data = sizeof(data_lndr)/sizeof(data_lndr[0]);
	int i=0;
	int pilih=0;
	char nama[50];
	char waktu_input[50];
	char jumlah[20];
	char nohp[15];
	char berat[50];
	char alamat[50];
	char namem[50];
	int memb[50];
	
	menu:
	printf("\n\n");
	printf("\t\tÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ\n");
    printf("\t\tÛ         SISTEM INFORMASI LAUNDRY        Û\n");
     printf("\t\tÛÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÛ\n");
	printf("=======================================================================\n");
    printf ("| No.|                         MENU                                   |\n");
    printf("|----------------------------------------------------------------------\n");
    printf("| 1  | LIHAT DATA                                                     |\n");
    printf("| 2. | INSERT DATA LAUNDRY                                            |\n");
    printf("| 3  | EDIT DATA LAUNDRY                                              |\n");
    printf("| 4. | DELETE DATA LAUNDRY                                            |\n");
    printf("| 5  | LIHAT DATA MEMBER LAUNDRY                                      |\n");
    printf("| 6. | AMBIL PAKAIAN LAUNDRY                                          |\n");
    printf("| 7. | SORTING ANTRIAN LAUNDRY                                        |\n");
    printf("| 8. | EXIT                                                           |\n");
    printf("=======================================================================\n");

	printf("\nPilih Menu : ");
	scanf("%d",&pilih);
	
	
	
	if(pilih==1){
		printf("\n\n=======================================================================\n");
		printf("\nList Data Costumer saat ini :                                         |\n\n");
		view();
		system("pause");
		system("cls");
		getch();
		goto menu;
		
	}else if(pilih==2){
		printf("\n=========================================\n");
		printf("|              FORMAT DATA              | ");
		printf("\n=========================================\n");
		printf("Nama \t\t: (nama)\n");
		printf("Waktu Input \t: (dd-mm-yyyy)\n");	
		printf("Jumlah Pakaian \t: (Angka)\n");
		printf("No. Handphone \t: (12-13 jumlah Angka)\n");
		printf("Alamat \t\t: (alamat)\n");
		printf("\n=========================================\n");
		system("pause");
		
		
		printf("\nNama \t\t: ");
		scanf(" %[^\n]s",&nama);
		printf("Waktu input \t: ");
		scanf("%s",&waktu_input);
		printf("Jumlah Pakaian \t: ");
		scanf(" %[^\n]s",&jumlah);
		printf("No. Handphone \t: ");
		scanf("%s",&nohp);
		printf("Alamat \t\t: ");
		scanf(" %[^\n]s",&alamat);
		insert(nama, waktu_input, jumlah, nohp, alamat);
		system("cls");
		goto menu;	
	
	}else if(pilih==3){
		int no=-1;
		printf("Masukkan nomor data yang akan di edit : ");
		input_edit:
			scanf("%d", &no);
		
		if(no>data){
			printf("Data dengan nomor %d tidak ditemukan, mohon input kembali : ");
			goto input_edit;
		}else{
			printf("\nNama : ");
			scanf(" %[^\n]s",&nama);
			printf("Waktu input: ");
			scanf("%s",&waktu_input);
			printf("Jumlah barang : ");
			scanf(" %[^\n]s",&jumlah);
			printf("No. Handphone : ");
			scanf("%s",&nohp);
			printf("Alamat : ");
			scanf(" %[^\n]s",&alamat);
			update(no-1, nama, waktu_input, jumlah, nohp, alamat);
			system("cls");
			goto menu;
		}
		
	}else if(pilih==4){
		int no=-1;
		printf("Masukkan nomor data yang akan dihapus : ");
		input_delete:
			scanf("%d", &no);
		
		if(no>data){
			printf("Data dengan nomor %d tidak ditemukan, mohon input ulang : ");
			goto input_delete;
		}else{
			delete(no-1);
			system("cls");
			goto menu;
		}
		
	}else if(pilih==5){
		int q;
		int i;;
		
		printf("\n\n=======================================================================\n");
		printf("\nList Data Laundry yang menjadi Member saat ini :                          |\n\n");
		viewmember();
		system("pause");
		system("cls");
		
		input_q:
		printf("\n\nMenu :");
		printf("\n1. Cek ID Member\n2. Kembali");
		printf("\nPilih : ");
		scanf("%d", &q);
		
		if(q>2 || q<1){
			printf("Invalid Answer");
			goto input_q;
		}
		
		if(q==1){
				
			int i;
			int x;
			int j;
			int find;
			
			printf("ID Member : ");
			scanf("%d", &x);
			
				int arr[3] = {101, 128, 111};
					for(i=0; i<3; i++){
						arr[i]=data_mem[i].memb;
					}				
				
				for(i=0; i<3; i++) // linear search
					if(arr[i]==x)
					break;
					
				if(i<3){
					printf("\n\nID telah terdaftar pada index %d\n", i);
					printf("Silakan gunakan ID Member lainnya\n");
					system("pause");
					system("cls");
					goto input_q;
				}else{
					printf("ID dapat digunakan ");
					system("pause");
					system("cls");
					goto input_mem;
				}
		
	
		}else if(q==2){
			goto menu;
		}	
		getch();
		goto menu;
					
	}else if(pilih==6){
		int quest;
		int mem;
		
		input_quest:
		printf("Apakah Anda Member Laundry?\n");
		printf("\n1. Ya\n2. Bukan\n");
		printf("Pilih : ");
		scanf("%d", &quest);
		system("cls");
		
		if(quest>2 || quest <1){
			printf("Invalid Answer");
			goto input_quest;
		};
			
		if(quest==1){
			member(quest);
			system("pause");
			system("cls");
			
		}else if(quest==2){
			int cek;
			
			
			input_mem:
			printf("\nApakah Anda ingin membuat member?");
			printf("\nPilih : \n1. Ya\n2. Tidak\n3. Lanjutkan dengan reguler\n");
			printf("Pilih : ");
			scanf("%d", &mem);
			
			if(mem>3 || mem<1){
				printf("Invalid Answer");
				goto input_mem;
			}
			
				if(mem==1){
					
					printf("\n\nSebelum mendaftar member laundry Anda harus menyiapkan :\n");
					printf("1. 3 digit ID Member yang akan digunakan sebagai ID Member Anda\n");
					printf("2. S&K Lainnya yang ditetapkan oleh Laundry\n");
					
					
					printf("\nNama Member \t\t: ");
					scanf(" %[^\n]s",&namem);
					printf("ID Member \t: ");
					scanf("%d",&data_mem[data].memb);
					newmember(namem, *memb);
					system("pause");
					system("cls");
					getch();
					goto menu;
					
				}else if(mem==2){
					goto menu;
				}else if(mem==3){
					reguler(mem);
					system("pause");
					system("cls");
				}
						
		}
		goto menu;
		
	}else if(pilih==7){
		int n, k = 0, A[15], i;
		
		printf("\nEx.\n");
		printf("Berapa jumlah Pengantri yang ada di Lobby : 5\n\n");
		printf("Masukkan nomor antrian yeng telah mengantri di lobby : \n");
		printf("6\n");
		printf("3\n");
		printf("11\n");
		printf("2\n");
		printf("7\n\n\n");
		
		system("pause");
		system("cls");

	    printf("Berapa jumlah Pengantri yang ada di Lobby : ");
	    scanf("%d", &n);
	
	    printf("\n\nMasukkan Nomor Antrian yang telah mengantri di Lobby :\n");
	
	    for (i = 1; i <= n; i++){ //perulangan untuk menyimpan array nomor antrian laundry
	        scanf("%d", &A[i]);
	        if (A[i] > k) {
	            k = A[i];
	        }
	    }
	    counting_sort(A, k, n); //memamnggil fungsi counting sort
	    printf("\n");
	    system("pause");
	    system("cls");
		goto menu;	
	}
return 0;	
}
