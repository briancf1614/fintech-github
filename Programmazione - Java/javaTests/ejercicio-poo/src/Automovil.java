
public class Automovil {

	//Attribute
	String marca;
	int modelo;
	int precio;
	boolean estado =false;
	//definition of constructor
	
	public Automovil()
	{
		System.out.println("se construyo un objeto de tipo movil");
	}
	
	//Metodo
	public void encender() {
		if(estado==true) {
			System.out.println("el carro esta ya encendido");
		}else {
			System.out.println("el automovil encendio");
			estado=true;
		}
		
		
		
	}
	public void apagar() {
		if(estado==true) {
			System.out.println("el el auto se apago correcxtamente");
			estado=false;
		}else {
			System.out.println("el automovil ya esta apagado");
		}
		
		
	}
	public void avanzar() {
		if(estado==true) {
			System.out.println("el automobil se esta moviendo");
		}else {
			System.out.println("el automovil esta apagado y no puede avanzar");
		}
	}
	
}
