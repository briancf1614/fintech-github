package funciones;

public class Main {

	public static void main(String[] args) {
		System.out.println("funcion main");
		//llamada a la funcion Hola
		int resultado=devuelveValor();
		System.out.println("el resultado es: "+devuelveValor());
	}
	public static void Hola() {
			//instrucciones

		System.out.println("hola mundo");
		}
	public static int devuelveValor() {
		return 5;
	}
	

}
