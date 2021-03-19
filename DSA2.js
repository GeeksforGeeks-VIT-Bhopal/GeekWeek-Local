public class ATaleOfThreeCities {
    public double connect(int[] ax, int[] ay, int[] bx, int[] by, int[] cx, int[] cy) {
        // Best distance between A and B
        double AB = getBestDistance(ax, ay, bx, by);
        double BC = getBestDistance(bx, by, cx, cy);
        double AC = getBestDistance(ax, ay, cx, cy);
        if(AB >= BC && AB >= AC) {
            return BC + AC;
        } else if (BC >=  AB && BC >= AC) {
            return AB + AC;
        } else {
            return AB + BC
.js
