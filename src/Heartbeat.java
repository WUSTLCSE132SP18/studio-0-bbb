
public class Heartbeat {
	public static void main(String[] args) {
		double t = 0;
		while(true) {
			try {
				Thread.sleep(1000);
				t+=1;
				System.out.println(t + " seconds have passed.");
			}catch(InterruptedException e){
				System.out.println("Error: " + e);
			}
		}
	}
}
