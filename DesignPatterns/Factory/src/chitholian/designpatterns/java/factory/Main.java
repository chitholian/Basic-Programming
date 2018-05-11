package chitholian.designpatterns.java.factory;

public class Main {
    public static void main(String[] args) {
        AbstractCreator creator1 = new CreatorOne(), creator2 = new CreatorTwo();
        Provider provider = new Provider(creator1);
        System.out.println("Product price is " + provider.getPriceOfProduct());
        provider.setCreator(creator2);
        System.out.println("Product price is " + provider.getPriceOfProduct());
    }
}
