package retorno_valor;

public class Main {

	public static void main(String[] args) {
		Transporte pullman=new Transporte(5000);
		
		int valor =pullman.precio();
		
		System.out.println("la FUNCION DEVOLVIO EL VALOR"+valor);

	}

}
