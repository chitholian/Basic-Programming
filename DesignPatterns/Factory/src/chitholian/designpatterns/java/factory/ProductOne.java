package chitholian.designpatterns.java.factory;

public class ProductOne extends AbstractProduct {
    @Override
    public int getPrice() {
        return Integer.parseInt(hashCode() + "", 16);
    }
}
