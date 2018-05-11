package chitholian.designpatterns.java.factory;

public class CreatorTwo extends AbstractCreator {
    @Override
    public AbstractProduct produce() {
        return new ProductTwo();
    }
}
