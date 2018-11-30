public class Liskovra_figyel {

	class Madarak{

	}

	class RepuloMadar extends Madarak{

		void repul(){
			System.out.println( this.toString() + " ... repul ... ");
		}

	}


	class Pingvin extends Madarak{

	}
	
	class Sas extends RepuloMadar{

	}
	
	public static void main(String[] args) {
		Liskovra_figyel liskov = new Liskovra_figyel();
		
		Pingvin pingvin = liskov.new Pingvin();
		Sas sas = liskov.new Sas();
		
	//	pingvin.repul();
		sas.repul();
	}
}