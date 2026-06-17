package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {

        // a. Create an instance of Veena and call play()
        Veena veena = new Veena();
        veena.play();

        // b. Create an instance of Saxophone and call play()
        Saxophone saxophone = new Saxophone();
        saxophone.play();

        // c. Place instances in a Playable variable and call play()
        Playable p1 = new Veena();
        p1.play();

        Playable p2 = new Saxophone();
        p2.play();
    }
}
