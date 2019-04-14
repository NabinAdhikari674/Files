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
        def path(self):
                m=input('the origin : ')
                n=input('the destination : ')
                path=[]
                for node in self.gd:
                        for incident in self.gd[node]:
                                e=(node,incident)
                                c=len(path)
                                if c>0:
                                        z=path[c-1]
                                        x=z[1]
                                else :
                                        x='0'
                                if incident==n:
                                        path.append(e)
                                        print(path)
                                        return("Path completed")
                                if m==node:
                                        m=0
                                        if e not in path:
                                                path.append(e)
                                if x==node:
                                        if e not in path:
                                                path.append(e)
                                                print('s')



                
g={"a" : ["d","b","c"],"b":["a","d"],"c":["a","d","e"],"d":["a","c","b"],"e":["c"]}
graph=Graph(g)
print("vertices of the graph : ",graph.vertices())
print('\nEdges of the graph are :',graph.generate_edges())
print('\n\tPath finder : ',graph.path())
