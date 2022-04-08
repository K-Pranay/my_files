class Assign1b
{
   public static void main(String args[])
   {
	int i=1;
	while (i<=5)
	{
	 int j=1;
	while(j<=i)
		{
		System.out.print(i);
		j++;
		}

		i++;
	if(i!=6)
	System.out.print("\n");  //or simply println()

	}
   }
}
