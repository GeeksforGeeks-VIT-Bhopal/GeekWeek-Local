public class EvenTree {
    private static class Node {
        int idx;
        ArrayList<Node> edges = new ArrayList<>();
        Node(int idx) {
            this.idx = idx;
        }
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int M = s.nextInt();

        Node[] nodes = new Node[N];
        for(int n=0; n<N; n++) nodes[n] = new Node(n);
        for(int m=0; m<M; m++) {
            int lhs = s.nextInt()-1;
            int rhs = s.nextInt()-1;
            nodes[lhs].edges.add(nodes[rhs]);
            nodes[rhs].edges.add(nodes[lhs]);
        }

        pruneDoubleEdges(nodes[0]);
        countEvenTrees(nodes[0]);

        System.out.println(countEvenTrees(nodes[0]));
    }

    private static int countEvenTrees(Node root) {
        int count = 0;
        List<Node> allNodes = new ArrayList<>();
        allNodes.addAll(root.edges);
        while(!allNodes.isEmpty()) {
            Node n = allNodes.remove(0);
            allNodes.addAll(n.edges);
            if(isEven(n)) count++;
        }
        return count;
    }

    private static boolean isEven(Node root) {
        int count = 0;
        List<Node> allNodes = new ArrayList<>();
        allNodes.add(root);
        while(!allNodes.isEmpty()) {
            count++;
            Node n = allNodes.remove(0);
            allNodes.addAll(n.edges);
        }
        return count%2 == 0;
    }

    private static HashSet<Node> visited = new HashSet<>();
    private static void pruneDoubleEdges(Node node) {
        // mark node as visited
        visited.add(node);
        // for each edge
        for(int i=0; i<node.edges.size(); i++) {
            Node n = node.edges.get(i);
            // if it has already been visited, then it is a double edge
            if(visited.contains(n)) {
                node.edges.remove(n);
                i--;
            } else {
                pruneDoubleEdges(n);
            }
        }
    }
}
