import java.util.Scanner;

public class fstsingle {

	public static void main(String[] args) 
{
			int a[] = new int[54];
			int dup[] = new int[65];
			int k=0; 
			Scanner sc = new Scanner(System.in);
		System.out.println("Enter how many numbers : ");
		int n = sc.nextInt();
		System.out.println("Enter number one by one : ");
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
				for(int i=1;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(a[i-1]==a[j+i])
					{
						dup[k] = a[i-1];
						k++;
				        	 }
			   	 }
			}
				System.out.println("Firdt Duplicate value in array : ");
				System.out.println(dup[1]);
}
}
