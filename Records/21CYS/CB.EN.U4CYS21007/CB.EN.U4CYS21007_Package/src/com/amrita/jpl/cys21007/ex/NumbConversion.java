package com.amrita.jpl.cys21007.ex;
import java.util.Scanner;
/**
 * @Author Anu Priya G CB.EN.U4CYS21007
 */
public class NumbConversion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Decimal Number to Convert: ");
        int dec = sc.nextInt();
        if (dec < 0) {
            System.out.println("Please Enter a Positive Decimal Number");
        } else {
            String bin = Integer.toBinaryString(dec);
            String hex = Integer.toHexString(dec);
            System.out.println("Binary Number of Given Decimal Number is : " + bin);
            System.out.println("Hexadecimal Number of Given Decimal Number is : " + hex);
        }
    }
}