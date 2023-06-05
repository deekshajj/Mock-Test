/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

public class Main
{
	public static void main(String[] args) {
		int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
		int n = arr.length;
		int count = 0;

		for (int i = 0; i < n; i++)
			if (arr[i] != 0)
				arr[count++] = arr[i]; 
		while (count < n)
			arr[count++] = 0;
			
		System.out.println("Array after pushing zeros to the back: ");
		for (int i=0; i<n; i++)
			System.out.print(arr[i]+" ");
	}
}
