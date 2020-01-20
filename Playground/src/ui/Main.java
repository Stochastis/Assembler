package ui;

import java.util.Scanner;

/**
 * 
 */

/**
 * @author cross
 *
 */
public class Main {

	/**
	 * @param args
	 */
	public static void main(final String[] args) {
		Scanner keyboard = new Scanner(System.in);
		String value1;
		String value2;

		System.out.println("Please enter a string");
		value1 = keyboard.nextLine();
		System.out.println("Please enter a string");
		value2 = keyboard.nextLine();

		if (value1.equals(value2)) {
			System.out.println("You entered the same thing");
		} else {
			System.out.println("You entered something different");
		}

		keyboard.close();
		// TODO Add more stuff.

	}

}
