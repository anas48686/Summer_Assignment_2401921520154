public class Outer {

    public void display() {
        System.out.println("Display method of Outer class");
    }

    // Inner class nested inside Outer
    class Inner {
        public void display() {
            System.out.println("Display method of Inner class");
        }
    }
}
