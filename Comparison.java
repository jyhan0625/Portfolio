package test;
import java.util.Scanner;

public class Comparison {
	
	public static int compare(int num1, int num2, int num3) {
		
		return (num1>num2)?(num1>num3)?num1:num3:(num2>num3)?num2:num3;
		
	}
	
	public static void main(String[] args) {
		
		System.out.printf("숫자1을 입력하세요: ");
		Scanner scanner = new Scanner(System.in);
		
		int num1 = scanner.nextInt();
				
		System.out.printf("숫자2을 입력하세요: ");
		
		int num2 = scanner.nextInt();
		
		System.out.printf("숫자3을 입력하세요: ");
		
		int num3 = scanner.nextInt();
		
		System.out.printf("가장 큰 숫자는 %d입니다.", compare(num1, num2, num3));
		
	}

}
