class Viestit {
    public static void main(String[] args) {
        System.out.println("Pollo, World!");
        System.out.println("Viestejä pukkaa maailmalle, oi kurjulaiset.");
        System.out.println("Terry A. Davis oli antisosiaalinen, mutta teki oman käyttiksensä.");
        System.out.println("Minua kiinnostaa maailman tapahtumat. Olen tietokoneohjelmoija, amatöörimatemaatikko ja amatöörifyysikko.");    
        for (String arg : args) {
            System.out.print(arg + " ");
        }
        System.out.println("");    
    }
}
