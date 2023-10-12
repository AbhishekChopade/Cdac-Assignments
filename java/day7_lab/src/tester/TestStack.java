package tester;
import com.app.core.*;
import static com.app.core.Stack.STACK_SIZE;
import java.util.Scanner;

public class TestStack {
	static Stack stack;
	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		FixedStack[] fixed = new FixedStack[STACK_SIZE];
		
		//FixedStack[] fixed = new FixedStack[sc.nextInt()];
		
		int cnt =0;
		boolean exit = false;
		while(!exit) {
			System.out.println("1. Choose Fixed Stack\n"+"2. Choose Growable Stack\n"+"3. Push Data\n"+
		                       "4. Pop data & display the same\n"+"5. Exit");
			System.out.println("Choose");
			switch(sc.nextInt()) 
			{
			case 1:
				stack = new FixedStack();
				System.out.println("FixedStack is chose");
				break;
			case 2:
				stack = new GrowableStack();
				System.out.println("FixedStack is chose");
				break;
			case 3:
				System.out.println("Enter id,name and address of a customer : ");
				Customer cust = new Customer(sc.nextInt(),sc.next(),sc.next());
				stack.push(cust);
				break;
			case 4:
				//System.out.println("Enter the id  = ");
				stack.pop();
				break;
			case 5:
				exit = true;
				System.out.println("Exit!!!!!!");
				break;
			default:
				System.out.println("Invalid Choice!!!!!");
				break;
			}
		}

	}

}
