package chitholian.designpatterns.java.observer;

public class SimpleObserver implements Observer {
    private Observable observable;

    public SimpleObserver(Observable observable) {
        registerTo(this.observable = observable);
    }

    @Override
    public void observe(Observable observable) {
        System.out.println("I am " + this + ", got informed an update from " + observable);
    }

    @Override
    public void registerTo(Observable observable) {
        observable.addObserver(this);
    }

    @Override
    public void unregisterFrom(Observable observable) {
        observable.removeObserver(this);
    }
}
