package chitholian.designpatterns.java.decorator;

public abstract class Component {
    private Component component;

    public Component(Component component) {
        this.component = component;
    }

    public int getLevel() {
        if (component != null)
            return component.getLevel() + 1;
        return 1;
    }
}
