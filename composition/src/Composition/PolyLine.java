package Composition;

public class PolyLine {
    Point[] point;
    int jumlahPoin=0;

    public PolyLine(int size){
        this.point = new Point[size];
    }
    public void appendPoint(Point p){
        point[jumlahPoin] = p;
        jumlahPoin++;
    }
    public void cetak(){
        for (Point baru : point){
            baru.cetak();
        }
    }
}
