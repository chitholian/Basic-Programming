package chitholian.designpatterns.java.observer;

public class Main {
    public static void main(String[] args) {
        Observable observable = new ObservableClass();
        Observer observer1 = new SimpleObserver(observable), observer2 = new SimpleObserver(observable);
        observer1.registerTo(observable);
        observer2.registerTo(observable);

        observable.setObservationNeeded();
        observable.notifyObservers();
        observer2.unregisterFrom(observable);

        observable.setObservationNeeded();
        observable.notifyObservers();
    }
}
