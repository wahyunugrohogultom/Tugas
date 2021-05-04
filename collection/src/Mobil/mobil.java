package Mobil;

public class mobil {
    String kodeMobil;
    String jenis;
    String merk;
    String nama_mobil;



    public mobil(String kodeMobil, String jenis, String merk, String nama_mobil){
        this.kodeMobil=kodeMobil;
        this.jenis=jenis;
        this.merk=merk;
        this.nama_mobil=nama_mobil;
    }

    public String toString(){
        return "Kode mobil : "+this.kodeMobil +"\n" +"jenis Mobil : "+this.jenis +"\n"+"Merk Mobil : "+this.merk +
                "\n" +"Nama Mobil : "+this.nama_mobil;

    }
}
