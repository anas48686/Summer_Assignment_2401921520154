public class MainClass {
    public static void main(String[] args) {
        Outer outer = new Outer();
        outer.display(); // calling Outer class's display()

        Outer.Inner inner = outer.new Inner();
        inner.display(); // calling Inner class's display()
    }
}
