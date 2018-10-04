public class Yoda {
    private static final String asd= null;
    public static void main(String[] args) {
        if(!"asd".equals(asd)){//Yoda kondico
	    System.out.println("Yoda kondicional nem dob hibat!");
	}
	System.out.println("Yoda kondicio nelkul hibat fog dobni..");
	try {
	    if(!asd.equals("asd")){
		//no-- Yoda kondicio"
	    }

	}catch (NullPointerException e){
	    System.out.println("Nullpointer exception!");
	    e.printStackTrace();
	}

    }
}
