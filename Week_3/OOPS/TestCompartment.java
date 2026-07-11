import java.util.Random;

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        Random rand = new Random();

        for (int i = 0; i < compartments.length; i++) {
            int type = rand.nextInt(4) + 1; // random number between 1 and 4

            switch (type) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }

        // Polymorphic behavior: same reference type (Compartment),
        // but notice() call resolves to the actual object's overridden method at runtime.
        for (int i = 0; i < compartments.length; i++) {
            System.out.println("Coach " + (i + 1) + " [" + compartments[i].getClass().getSimpleName() + "]: "
                    + compartments[i].notice());
        }
    }
}
