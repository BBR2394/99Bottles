
public class Fn99bottles {
	private int _counter;
	
	private void trvl()
	{
		while (_counter > 0)
		{
			System.out.println(_counter + " bottle of beer on the wall, " + _counter + " bottle of beer.");
			_counter -= 1;
			if (_counter != 0)
				System.out.println("Take one down and pass it around, " + _counter + " bottles of beer on the wall.");
			else
				System.out.println("Take one down and pass it around, no more bottles of beer on the wall.");
		}
			System.out.print("No more bottles of beer on the wall, no more bottles of beer.\n");
			System.out.println("Go to the store and buy some more, 99 bottles of beer on the wall.");
	}
	
	public void mouai()
	{
		trvl();
	}
	
	public Fn99bottles()
	{
		_counter = 99;
	}
	
	
}
