package Mobil;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Vector;

public class main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int i, jmlhData;
        String kodeMobil, jenis, merk, nama_mobil;

        boolean ulang = true;
        int pilih;
        String tanya;
        while (ulang == true) {
            System.out.println("===MENU===");
            System.out.println("1. LinkedList");
            System.out.println("2. ArrayList");
            System.out.println("3. Vector");
            System.out.println("0. Keluar");
            System.out.print("Input : ");
            pilih = input.nextInt();
            input.nextLine();
            switch (pilih) {
                case 1:
                    LinkedList<mobil> dataMobil = new LinkedList();
                    System.out.println("===LinkedList===");
                    System.out.print("Input jumlah data : ");
                    jmlhData = input.nextInt();
                    input.nextLine();
                    for (i = 0; i < jmlhData; i++) {
                        System.out.println("Kode Mobil : ");
                        kodeMobil = input.nextLine();
                        System.out.println("Jenis : ");
                        jenis = input.nextLine();
                        System.out.println("Merk : ");
                        merk = input.nextLine();
                        System.out.println("Nama Mobil : ");
                        nama_mobil = input.nextLine();

                        System.out.println("\nSilahkan pilih : ");
                        System.out.println("1. Tambah Di awal List");
                        System.out.println("2. Tambah Di akhir list");
                        System.out.print("Input : ");
                        pilih = input.nextInt();
                        input.nextLine();
                        switch (pilih) {
                            case 1:
                                dataMobil.addFirst(new mobil(kodeMobil, jenis, merk, nama_mobil));
                                break;
                            case 2:
                                dataMobil.addLast(new mobil(kodeMobil, jenis, merk, nama_mobil));
                                ulang = false;
                        }

                    }
                    System.out.println("===Data Mobil===");
                    for (i = 0; i < dataMobil.size(); i++) {
                        System.out.print(dataMobil.get(i));
                    }
                    break;
                case 2:
                    ArrayList<mobil> dataMobil2 = new ArrayList<mobil>();
                    while(ulang==true) {
                        System.out.println("===ArrayList===");
                        System.out.println("1. Tambah Data");
                        System.out.println("2. Tampilkan Data");
                        System.out.println("3. Hapus Data");
                        System.out.print("Input : ");
                        pilih = input.nextInt();
                        input.nextLine();
                        switch (pilih) {
                            case 1:
                                    System.out.println("Kode Mobil : ");
                                    kodeMobil = input.nextLine();
                                    System.out.println("Jenis : ");
                                    jenis = input.nextLine();
                                    System.out.println("Merk : ");
                                    merk = input.nextLine();
                                    System.out.println("Nama Mobil : ");
                                    nama_mobil = input.nextLine();
                                    System.out.println("=============");
                                    dataMobil2.add(new mobil(kodeMobil, jenis, merk, nama_mobil));
                            break;
                            case 2:
                                System.out.println("==Data Mobil==");
                                for(i = 0; i < dataMobil2.size(); i++){
                                    System.out.println(dataMobil2.get(i));
                                }
                            break;
                            case 3:
                                System.out.println("Apa anda yakin menghapus data? (y/n) : ");
                                tanya= input.nextLine();
                                if(tanya=="y"){
                                    System.out.println("Data tidak terhapus");

                                }
                                else {
                                    dataMobil2.removeAll(dataMobil2);
                                    System.out.println("Data terhapus");
                                }
                            ulang=false;
                        }
                    }
                    break;
                case 3:
                    Vector<mobil> dataMobil3 = new Vector();
                    while (ulang == true) {
                        System.out.println("===Vector===");
                        System.out.println("1. Tambah Data");
                        System.out.println("2. Tampilkan Data");
                        System.out.println("3. Hapus Data");
                        System.out.print("Input : ");
                        pilih = input.nextInt();
                        input.nextLine();
                        switch (pilih) {
                            case 1:
                                System.out.println("Masukkan jumlah data : ");
                                jmlhData = input.nextInt();
                                input.nextLine();
                                for (i = 0; i < jmlhData; i++) {
                                    System.out.println("Kode Mobil : ");
                                    kodeMobil = input.nextLine();
                                    System.out.println("Jenis : ");
                                    jenis = input.nextLine();
                                    System.out.println("Merk : ");
                                    merk = input.nextLine();
                                    System.out.println("Nama Mobil : ");
                                    nama_mobil = input.nextLine();
                                    System.out.println("=============");
                                    dataMobil3.add(new mobil(kodeMobil, jenis, merk, nama_mobil));
                                }
                                break;
                            case 2:
                                System.out.println("===Data Mobil===");
                                for (i = 0; i < dataMobil3.size(); i++) {
                                    System.out.println(dataMobil3.get(i));
                                    System.out.println();
                                }
                                break;
                            case 3:
                                System.out.println("Apa anda yakin menghapus data? (y/n) : ");
                                tanya= input.nextLine();
                                if(tanya=="y"){
                                    System.out.println("Data tidak terhapus");

                                }
                                else {
                                    dataMobil3.removeAll(dataMobil3);
                                    System.out.println("Data terhapus");
                                }
                            
                        }


                    }
            }

        }
    }
}