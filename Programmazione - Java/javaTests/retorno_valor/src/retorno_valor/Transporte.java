package retorno_valor;

public class Transporte {
	int precio=1000;
	public Transporte(int precio) {
		this.precio=precio;
		System.out.println("se creo el objeto");
	}
	public int precio() {
		
		return this.precio;
	}
}
