public class Find3OrderedIntegersInArray
{
  // Given an array find 3 elements such that a[i] < a[j] < a[k] and i < j < k in 0(n) time.
  public static void main (String args[])
  {
    int[] arr = new int[]{5,3,8,7,2,7,1};
    int size = 9;
    int[] min= new int[size];
    int[] max = new int[size];
    mini[0] = 0;
    maxi[size-1] = size-1;
    
    int min = arr[0];
    int max = arr[size-1];
    for (int i = 1; i < size; i++)
    {
      if (arr[i] < min)
      {
      min = arr[i];
    mini[i] = i;
      }
      else
        mini[i] = mini[i-1];
      // System.out.print (mini[i] + "  ");
    }
    System.out.println();
    for (int i = size-2; i >= 0; i--)
    {
      if (arr[i] > max)
     {
       max = arr[i];
       maxi[i] = i;
      }
      else
       maxi[i] = maxi[i+1];
     // System.out.print (maxi[i] + "  ");
    }
    System.out.println();
    
    System.out.println("The output : ");
    for (int i = 0; i < size; i++)
      if (arr[mini[i]] < arr[i] && arr[i] < arr[maxi[i]])
      System.out.println(arr[mini[i]] + " < " + arr[i] + " < " + arr[maxi[i]]);
    
  }
}
