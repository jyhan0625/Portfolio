package test;

public class Car {

	String carName;
	double maxSpeed;
	
	public Car(String carName, double maxSpeed) {
		this.carName = carName;
		this.maxSpeed = maxSpeed;
	}
	
	public void addMaxSpeed(double speed) {
		this.maxSpeed += speed;
	}
	
	public static void main(String[] args) {
	
		Car A = new Car("Alex", 169.3);
		Car B = new Car("Bell", 230.1);
		
		A.addMaxSpeed(50.28);
		System.out.printf("수정된 자동차의 이름: %s, 수정된 자동차의 최대속도: %f", A.carName, A.maxSpeed);
		
	}
}
