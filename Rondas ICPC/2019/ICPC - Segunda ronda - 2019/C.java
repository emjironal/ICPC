import java.util.Scanner;
import java.math.*;
public class C
{
  public static void main(String[] args)
  {
    Scanner input = new Scanner(System.in);
    int t = input.nextInt();
    for(int i = 0; i < t; i++)
    {
      int n = input.nextInt();
      Double x = Math.pow(9, n - 1);
      Double result = 10 * x;
      result = result % 1000000007;
      System.out.println(result.toString());
    }
  }
}
