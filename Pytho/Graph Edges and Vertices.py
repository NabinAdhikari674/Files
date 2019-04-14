class Graph(object):
        def __init__(self,gd=None):
                if gd==None:
                        gd=()
                self.gd=gd
        def vertices(self):
                return list(self.gd.keys())
        def generate_edges(self):
                edges=[]
                for node in self.gd:
                        for incident in self.gd[node]:
                                e=(node,incident)
                                if e not in edges:
                                        edges.append(e)
                return edges
g={"a" : ["d"],"b":["c"],"c":["b","c","d","e"],"d":["a","c"],"e":["c"],"f":[]}
graph=Graph(g)
print("vertices of the graph : ",graph.vertices())
print('\nEdges of the graph are :',graph.generate_edges())
