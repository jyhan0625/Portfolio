package test;
import java.io.*;
import java.util.*;


public class Balance {
	
	public static int balance(int set[], int unitIndex, int unit, int money) {
		
		set[unitIndex] += money / unit;
		return money %= unit;
		
	}

	public static void main(String[] args ) {
		
		Scanner scanner = new Scanner(System.in);
		
		int [] unit = {50000, 10000, 1000, 100, 10, 1};
		
		System.out.printf("금액을 입력하세요: ");
		int money = scanner.nextInt();
		
		int [] set = {0,0,0,0,0,0};
		
		while(money>0) {
			
			if (money >= 50000) money = balance(set, 0, 50000, money);
			
			else if (money >= 10000) money = balance(set, 1, 10000, money);
			
			else if (money >= 1000) money = balance(set, 2, 1000, money);
			
			else if (money >= 100) money = balance(set, 3, 100, money);
			
			else if (money >= 10) money = balance(set, 4, 10, money);
			
			else if (money >= 1) money = balance(set, 5, 1, money);
			
		}
		
		System.out.printf("50000원 %d개, 10000원 %d개, 1000원 %d개, 100원 %d개,10원 %d, 1원 %d개 필요합니다.", set[0], set[1], set[2], set[3], set[4], set[5]);
		
	}
	
}
