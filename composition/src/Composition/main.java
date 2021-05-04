package Composition;

import java.util.Scanner;

public class main {
    public static  void main (String[] args){
        int a;
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan banyak point : ");
        a = input.nextInt();
        PolyLine polyLine = new PolyLine(a);

        for (int i=0; i<a; i++){
            System.out.print("\nMasukkan Point x : ");
            int x = input.nextInt();
            System.out.print("Masukkan Point y : ");
            int y = input.nextInt();
            Point point = new Point(x,y);
            polyLine.appendPoint(point);
        }
        polyLine.cetak();
        System.out.println();
    }

}
