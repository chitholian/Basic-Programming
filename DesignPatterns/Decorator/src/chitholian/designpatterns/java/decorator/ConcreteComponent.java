package chitholian.designpatterns.java.decorator;

public class ConcreteComponent extends AbstractComponent {
    public ConcreteComponent(AbstractComponent component) {
        super(component);
    }

    @Override
    public int getLevel() {
        if (component != null)
            return component.getLevel() + 1;
        return 1;
    }
}
