package chitholian.designpatterns.java.observer;

import java.util.HashSet;
import java.util.Set;

public class ObservableClass implements Observable {
    private Set<Observer> observerSet;
    private boolean observationNeeded;

    /**
     * Initialize observerSet on instance creation.
     */
    public ObservableClass() {
        observerSet = new HashSet<>();
    }

    /**
     * Method called to trigger observation.
     */
    @Override
    public void notifyObservers() {
        /* Trigger observe() method of all observers if observation is required */
        if (observationNeeded) {
            for (Observer observer : observerSet)
                // you can check if it is null to handle
                // null pointer exception.
                // if (observer != null)
                observer.observe(this);
            observationNeeded = false;
        }
    }

    /**
     * Method to register observers.
     *
     * @param observer: Observer to register.
     */
    @Override
    public void addObserver(Observer observer) {
        observerSet.add(observer);
    }

    /**
     * Method to remove an observer.
     *
     * @param observer: Observer to remove.
     */
    @Override
    public void removeObserver(Observer observer) {
        observerSet.remove(observer);
    }

    @Override
    public void setObservationNeeded() {
        observationNeeded = true;
    }
}
