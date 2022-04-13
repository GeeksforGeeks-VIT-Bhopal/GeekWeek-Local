public class Abacus {
    public String[] add(String[] original, int val) {
        String ori = "";
        for (int i = 0; i < 6; i++)
            ori += original[i].length() - original[i].indexOf("---") - 3;
        int num = Integer.parseInt(ori);
        num += val;
        String[] res = new String[6];
        for (int i = 0; i < 6; i++) {
            res[5 - i] = "";
            int digit = num % 10;
            for (int j = 0; j < 9 - digit; j++)
                res[5 - i] += 'o';
            res[5 - i] += "---";
            for (int j = 0; j < digit; j++)
                res[5 - i] += 'o';
            num /= 10;
        }
        return res;
    }
}
