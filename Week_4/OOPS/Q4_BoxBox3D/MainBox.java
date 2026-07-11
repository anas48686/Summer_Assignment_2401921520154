public class MainBox {
    public static void main(String[] args) {
        Box box = new Box(5, 4);
        System.out.println("Box area: " + box.area()); // 20.0

        Box3D box3d = new Box3D(5, 4, 3);
        System.out.println("Box3D area: " + box3d.area());     // 20.0 (inherited)
        System.out.println("Box3D volume: " + box3d.volume()); // 60.0

        box3d.setDimensions(2, 3, 4);
        System.out.println("Updated Box3D volume: " + box3d.volume()); // 24.0
    }
}
