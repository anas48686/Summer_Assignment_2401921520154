public class Box {
    protected double length;
    protected double breadth;

    public Box() {
        this.length = 0;
        this.breadth = 0;
    }

    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public void setDimensions(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double area() {
        return length * breadth;
    }
}
