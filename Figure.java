package test;
import java.util.Scanner;

public class Figure {

	String name;
	double radius;
	double length;
	double width;
	double area;
	
	public Figure(String name, double radius) {
		this.name = name;
		this.radius = radius;
	}
	
	public Figure(String name, double length, double width) {
		this.name = name;
		this.length = length;
		this.width = width;
	}
	
	public void getArea(double radius) {
		area = Math.PI * Math.pow(radius, 2);
	}
	
	public void getArea(double length, double width) {
		area = length * width;
	}
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		Figure [] circleRectangle = new Figure[4];
		
		for(int i=0; i<4; i++) {
			
			String input = scanner.nextLine();
			String [] inputSplit = input.split(" ");
			
			if (inputSplit.length == 2) {
				
				String name = inputSplit[0];
				double radius = Double.valueOf(inputSplit[1]);
				circleRectangle[i] = new Figure(name, radius);
				circleRectangle[i].getArea(radius);
			}
			
			else if (inputSplit.length == 3) {
				
				String name = inputSplit[0];
				double length = Double.valueOf(inputSplit[1]);
				double width = Double.valueOf(inputSplit[2]);
				circleRectangle[i] = new Figure(name, length, width);
				circleRectangle[i].getArea(length, width);
			}
			
		}
		
		for (int i=0; i<4; i++) {
			System.out.printf("%s의 넓이: %.2f\n", circleRectangle[i].name, circleRectangle[i].area);
		}
		
	}
	
}
