import java.math.BigInteger;

class Solution {
    int[][] points;
    int n;
    HashMap<Pair<Integer, Integer>, Integer> lines = new HashMap<Pair<Integer, Integer>, Integer>();
    int horizontal_lines;
    private Pair<Integer, Integer> slope_coprime(int x1, int y1, int x2, int y2) {
        int deltaX = x1 - x2, deltaY = y1 - y2;
        if (deltaX == 0)
            return new Pair<>(0, 0);
        else if (deltaY == 0)
            return new Pair<>(Integer.MAX_VALUE, Integer.MAX_VALUE);
        else if (deltaX < 0) {
            deltaX = -deltaX;
            deltaY = -deltaY;
        }
        Integer gcd = BigInteger.valueOf(deltaX).gcd(BigInteger.valueOf(deltaY)).intValue();

        return new Pair<Integer, Integer>(deltaX / gcd, deltaY / gcd);
    }

    public Pair<Integer, Integer> add_line(int i, int j, int count, int duplicates) {
      
        int x1 = points[i][0];
        int y1 = points[i][1];
        int x2 = points[j][0];
        int y2 = points[j][1];
        // add a duplicate point
        if ((x1 == x2) && (y1 == y2))
            duplicates++;
        // add a horisontal line : y = const
        else if (y1 == y2) {
            horizontal_lines += 1;
            count = Math.max(horizontal_lines, count);
        }
       
        else {
            Pair<Integer, Integer> slope = this.slope_coprime(x1, y1, x2, y2);
            lines.put(slope, lines.getOrDefault(slope, 1) + 1);
            count = Math.max(lines.get(slope), count);
        }
        return new Pair(count, duplicates);
    }

    public int max_points_on_a_line_containing_point_i(int i) {
       
        lines.clear();
        horizontal_lines = 1;
       
        int count = 1;
        
        int duplicates = 0;

        
        for (int j = i + 1; j < n; j++) {
            Pair<Integer, Integer> p = add_line(i, j, count, duplicates);
            count = p.getKey();
            duplicates = p.getValue();
        }
        return count + duplicates;
    }


    public int maxPoints(int[][] points) {

        this.points = points;
        
        n = points.length;
        if (n < 3)
            return n;

        int max_count = 1;
       
        for (int i = 0; i < n - 1; i++)
            max_count = Math.max(max_points_on_a_line_containing_point_i(i), max_count);
        return max_count;
    }
}
