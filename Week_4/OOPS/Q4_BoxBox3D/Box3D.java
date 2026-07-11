public class Box3D extends Box {
    private double height;

    public Box3D() {
        super();
        this.height = 0;
    }

    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public void setDimensions(double length, double breadth, double height) {
        super.setDimensions(length, breadth);
        this.height = height;
    }

    public double volume() {
        return area() * height; // reuses Box's area() method
    }
}
