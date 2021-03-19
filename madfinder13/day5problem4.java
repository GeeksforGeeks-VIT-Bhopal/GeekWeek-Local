package com.samuelale.practice;

import java.util.;


public class CutTheTree {

    private static class Node {
        int value;
        int total;
        List<Node> edges;

        Node(int val) {
            this.value = val;
            total = 0;
            edges = new ArrayList<>();
        }

        @Override
        public String toString() {
            return "Val: " + value + " | Total: " + total; //+ " | Edges: " + edges.toString();
        }
    }

    private static HashSet<Node> visited = new HashSet<>();

    private static void findTotal(Node n) {
        visited.add(n);
        if(n.edges.isEmpty()) {
            n.total = n.value;
        } else {
            int total = n.value;
            for(Node edge : n.edges) {
                if(visited.contains(edge)) continue;
                visited.add(edge);
                findTotal(edge);
                total+=edge.total;
            }
            n.total = total;
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();

        Node[] nodeArr = new Node[N];
        for(int i=0; i<N; i++) {
            nodeArr[i] = new Node(input.nextInt());
        }

        for(int i=0; i<N-1; i++) {
            int n1 = input.nextInt()-1;
            int n2 = input.nextInt()-1;
            nodeArr[n1].edges.add(nodeArr[n2]);
            nodeArr[n2].edges.add(nodeArr[n1]);
        }

        // calculate the totals at each node
        findTotal(nodeArr[0]);

        int minDiff = Integer.MAX_VALUE;
        for(int i=1; i<N; i++) {
            int diff = Math.abs(nodeArr[0].total - nodeArr[i].total2);
            if(diff < minDiff) {
                minDiff = diff;
            }
        }
        System.out.print(minDiff);
    }
}
