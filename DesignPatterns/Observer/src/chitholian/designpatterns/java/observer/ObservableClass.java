package chitholian.designpatterns.java.observer;

public interface Observable {
    void onUpdate();
    void addObserver(Observer observer);
    void removeObserver(Observer observer);
}
