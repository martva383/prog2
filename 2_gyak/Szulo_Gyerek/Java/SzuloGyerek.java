class Vader {
	
    protected int v_age;
    protected String v_name;
    
    public void setAge(int age) {
        v_age = age;
    }
    
    public void setName(String name) {
        v_name = name;
    }
    
    public int getAge() {
        return v_age;
    }
    
}

class SkywalkerLajos extends Vader {
	
    public String getName() {
        return v_name;
    }
    
}
class SzuloGyerek {
	
    public static void main(String args[]) {
    	
        Vader v = new SkywalkerLajos();
        v.setName("Vader");
        v.setAge(38);
        
        SkywalkerLajos s = new SkywalkerLajos();
        v.setName("SkywalkerLajos");
        v.setAge(25);
        
        System.out.println(s.getName() + " " + v.getName());
    }
    
}