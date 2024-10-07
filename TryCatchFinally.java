package test;
import java.util.Scanner;

public class TryCatchFinally {

	public static int sum(int n, int m) {
		return n + m;
	}
	
	public static int sub(int n, int m) {
		return n - m;
	}
	
	public static int mul(int n, int m) {
		return n * m;
	}
	
	public static int div(int n, int m) {
		
		try {
			
			return n / m;
			
		}
		catch(ArithmeticException e) {
			
			System.out.print("0으로 나눌 수 없습니다! 다시 입력하세요.\n");
			return -1;
		}
		
	}
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		int ans = -1;
		
		while(ans == -1) {
		
			System.out.print("n / m 연산에 해당하는 n과 m을 입력하시오: ");
			int n = scanner.nextInt();
			int m = scanner.nextInt();
			ans = div(n, m);
			
		}
		
		if (ans >= 0) System.out.printf("답은 %d입니다.",ans);
		
		
	}
	
}
