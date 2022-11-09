package encapsulacion;

public class Automovil {
	private int precio;
	private String name;
	private int id;
	
	
	//constructor
	public Automovil() {
		System.out.println("se creo el automobil");
	}
	//metodos get
	public int getPrecio() {
		return this.precio;
	}
	public String getName() {
		return this.name;
	}
	public int getId() {
		return this.id;
	}
	//metodos set
	public void  setPrecio(int p) {
		this.precio=p;
	}
	public void setName(String n) {
		this.name=n;
	}
	public void setId(int i) {
		this.id=i;
	}
}
