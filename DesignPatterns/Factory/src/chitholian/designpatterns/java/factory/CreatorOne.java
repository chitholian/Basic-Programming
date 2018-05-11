package chitholian.designpatterns.java.factory;

public class CreatorOne extends AbstractCreator {
    @Override
    public AbstractProduct produce() {
        return new ProductOne();
    }
}
