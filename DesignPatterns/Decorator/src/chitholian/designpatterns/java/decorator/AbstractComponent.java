package chitholian.designpatterns.java.decorator;

public abstract class Component {
    protected Component component;

    public Component(Component component) {
        this.component = component;
    }

    public abstract int getLevel();
}
