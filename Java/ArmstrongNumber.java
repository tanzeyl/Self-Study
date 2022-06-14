package com.comapny;
import java.util.Scanner;
import java.lang.Math;

public class ArmstrongNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, temp, sum = 0, rem;
        System.out.println("Enter the number");
        n = sc.nextInt();
        temp = n;
        while (temp > 0) {
            rem = temp % 10;
            sum = sum + (int) Math.pow(rem, 3);
            temp = temp / 10;
        }
        if (sum == n)
            System.out.println("Armstrong number.");
        else
            System.out.println("Not an Armstrong number.");
        sc.close();
    }
}
