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
            return AB + BC;
        }
    }

    private double getBestDistance(int[] nx, int[] ny, int[] mx, int[] my) {
        double bestDistance = Double.MAX_VALUE;
        for(int i = 0; i < nx.length; i++) {
            for(int j = 0; j < mx.length; j++) {
                double currentDistance = Math.sqrt((Math.pow(nx[i] - mx[j], 2) + Math.pow(ny[i] - my[j], 2)));
                if(currentDistance < bestDistance) {
                    bestDistance = currentDistance;
                }
            }
        }
        return bestDistance;
    }
}
