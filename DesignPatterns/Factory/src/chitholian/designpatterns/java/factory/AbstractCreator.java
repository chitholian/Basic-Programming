package chitholian.designpatterns.java.factory;

public abstract class AbstractCreator {
    public abstract AbstractProduct produce();

    public int getPrice() {
        return produce().getPrice();
    }
}
