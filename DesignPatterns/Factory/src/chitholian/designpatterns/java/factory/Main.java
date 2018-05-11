package chitholian.designpatterns.java.decorator;

public class Main {
    public static void main(String[] args) {
        Component component = new ConcreteComponent(null);
        component = new ConcreteComponent(component);
        component = new ConcreteComponent(component);
        component = new ConcreteComponent(component);
        component = new ConcreteComponent(component);
        component = new ConcreteComponent(component);
        component = new ConcreteComponent(component);

        System.out.println("I have decorated " + component.getLevel() + " components.");
    }
}
