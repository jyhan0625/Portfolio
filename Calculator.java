package test;

public class Calculator {
	
	public static float sum(float n, float m) {
		
		return n + m;
		
	}
	
	public static float sub(float n, float m) {
		
		return n - m;
		
	}
	
	public static float mul(float n, float m) {
		
		return n * m;
		
	}
	
	public static float div(float n, float m) {
		
		return n / m;
		
	}
	
	public static void main(String[] args) {
		
		float n = 2.0f, m = 4.0f;
		
		System.out.println(n + " + " + m + " = " + sum(n, m));
		System.out.println(n + " - " + m + " = " + sub(n, m));
		System.out.println(n + " * " + m + " = " + mul(n, m));
		System.out.println(n + " / " + m + " = " + div(n, m));
	}
	
	

}
