package com.amrita.jpl.cys21069.practice.assignments;
/**
 * The pattern class represents a simple pattern printing program.
 * It has no argument just prints an pattern
 *
 * @author Seran Pandiyan I P   CB.EN.U4CYS21069
 * @version 0.1
 */
public class pattern {
    public static void main(String[] args) {
        for(int i=1;i<=15;i++){
            for(int j=1;j<40;j++){
                if(i<10 && j<7){
                    if(i%2==0 && j==5){
                        continue;
                    }
                    System.out.print("*");
                }
                else {
                    System.out.print("=");
                }
            }
            System.out.println();
        }
    }
}
