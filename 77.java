import java.util.*;
public.class.Proset1
{
SuppressWarnings({ "resource", "unused" })
public static void main(String[] args)
{
	int m,d;
    int co=0,a,s,z,sm=0;
    Scanner sc=new Scanner(System.in);
    m=sc.nextInt();
    int length=(int)(Math.log10(m)+2);
     System.out.println(""+length);
    for(s=0;m<length;s++)
    {
    while(m>0)
 {
        d=m%10;
        a=length;
        z=d^a;
        sm=sm+z;
        System.out.println(""+sm);
        co++;
}
}
}
}
