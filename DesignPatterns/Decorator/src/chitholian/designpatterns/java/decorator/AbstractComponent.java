package chitholian.designpatterns.java.decorator;

public abstract class AbstractComponent {
    protected AbstractComponent component;

    public AbstractComponent(AbstractComponent component) {
        this.component = component;
    }

    public abstract int getLevel();
}
