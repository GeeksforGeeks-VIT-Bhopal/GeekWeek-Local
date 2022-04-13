'''
    Time Complexity = O(N+M)
    Space Complexity = O(N+M)
    
    Where N is the number of nodes and M is the number of edges in the given graph.
'''

from queue import Queue

#    Class for graph node is as follows:

class graphNode:
    def __init__(self, *args):
        if(len(args) == 0):
            self.data = 0
            self.neighbours = []

        elif(len(args) == 1):
            self.data = args[0]
            self.neighbours = []

        elif(len(args) == 2):
            self.data = args[0]
            self.neighbours = args[1]

    def __del__(self):
        self.neighbours.clear()


def cloneGraphHelper(node, copies):

    if (node == None):
        return None

    #    Create a graph node which denotes the node of the cloned graph.
    copy = graphNode(node.data)

    #    Update the dictionary.
    copies[node] = copy

    #    Queue used for BFS.
    level = Queue()

    #    Push the source node.
    level.put(node)

    while(not level.empty()):
        #    Take the front element from the queue.
        cur = level.get()

        #    Go through all the neighbours.
        for neighbor in cur.neighbours:

            #    If it is not present in dictionary.
            if neighbor not in copies:
                copies[neighbor] = graphNode(neighbor.data)
                level.put(neighbor)

            copies[cur].neighbours.append(copies[neighbor])

    return copy


def cloneGraph(node):
    #    Create a dictionary
    copies = {}

    #    Return the source node of the cloned graph.
    return cloneGraphHelper(node, copies)
