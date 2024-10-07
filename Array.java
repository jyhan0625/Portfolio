package test;

public class Array {
	
	public static void main(String[] args) {
		
		int arr[][] = new int[5][];
		arr[0] = new int[]{10,11,12,13,14};
		arr[1] = new int[]{20,21,22};
		arr[2] = new int[]{30,31,32,33};
		arr[3] = new int[]{40};
		arr[4] = new int[]{50,51};
		
		for (int i = 0; i<arr.length; i++) {
			
			for(int j=0; j<arr[i].length; j++) {
				
				System.out.printf("%d ", arr[i][j]);
				
			}
			
			System.out.println();
			
		}
		
		
	}

}
