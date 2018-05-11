package chitholian.designpatterns.java.observer;

public interface Observer {
    void observe(Observable observable);
    void registerTo(Observable observable);
    void unregisterFrom(Observable observable);
}
