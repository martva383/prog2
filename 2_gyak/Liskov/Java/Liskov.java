public class Liskov {

	class Madarak{

		
		void repul(){
			System.out.println( this.toString() + " ... repul ... ");
		}

	}

	class Pingvin extends Madarak{

	}
	
	class Sas extends Madarak{

	}
	
	public static void main(String[] args) {
		Liskov liskov = new Liskov();
		
		Pingvin pingvin = liskov.new Pingvin();
		Sas sas = liskov.new Sas();
		
		pingvin.repul();
		sas.repul();
	}
}