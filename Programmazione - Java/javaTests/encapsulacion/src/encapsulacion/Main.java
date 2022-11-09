package encapsulacion;

public class Main {

	public static void main(String[] args) {
		Automovil panda=new Automovil();
		
		
		panda.setName("fiat panda 2");
		panda.setId(6);
		panda.setPrecio(12000);
		
		
		System.out.println("el nombre es"+panda.getName()+"con id"+panda.getId()+"y precio"+panda.getPrecio());

	}

}
