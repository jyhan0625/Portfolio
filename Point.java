package test;

public class Point {

	int x;
	int y;
	
	public Point() {
		x = 0;
		y = 0;
	}
	
	public Point(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public double getDistance(Point P) {
		
		return Math.sqrt(Math.pow(this.x - P.x, 2) + Math.pow(this.y - P.y, 2));
		
	}
	
	public static void main(String[] args) {
		
		Point A = new Point(); // 기본 생성
		Point B = new Point(4, 5);
		Point C = new Point(3,9);
		
		double AB = A.getDistance(B);
		double AC = A.getDistance(C);
		double BC = B.getDistance(C);
		
		double minDistance = Math.min(AB, Math.min(AC, BC));
		
		System.out.printf("가장 짧은 거리는 %f", minDistance);
		
	}
	
}

