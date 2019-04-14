graph={'A':['b','c','e'],'B':['a','d'],'C':['a','e','d'],'D':['c','b'],'E':['a','c']}

def generate_edge():
        edge=[]
        for i in graph:
                for j in graph:
                        edge.append((i,j))
        return(edge)
print(generate_edge())
