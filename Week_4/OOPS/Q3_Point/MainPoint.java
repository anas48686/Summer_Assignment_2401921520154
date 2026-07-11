public class MainPoint {
    public static void main(String[] args) {
        Point p1 = new Point();
        p1.display(); // Point(0, 0)

        Point p2 = new Point(3, 4);
        p2.display(); // Point(3, 4)

        p1.setX(10);
        p1.setY(20);
        p1.display(); // Point(10, 20)

        p1.setXY(7, 8);
        p1.display(); // Point(7, 8)
    }
}
