package chitholian.designpatterns.java.factory;

public class Provider {
    private AbstractCreator creator;

    public Provider(AbstractCreator creator) {
        setCreator(creator);
    }

    public int getPriceOfProduct() {
        return creator.getPrice();
    }

    public void setCreator(AbstractCreator creator) {
        this.creator = creator;
    }
}
