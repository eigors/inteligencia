from time import clock
tiempo_inicial = clock()
def heap(arr, n, i):
    mgrande = i  	  # Inicializamos
    l = 2 * i + 1     # Izquierda = 2*i + 1
    r = 2 * i + 2     # Derecha = 2*i + 2
 
    # si es el mas grande
    if l < n and arr[i] < arr[l]:
        mgrande = l
 
    # Si hijo derecho es más grande que la más grande hasta el momento
    if r < n and arr[mgrande] < arr[r]:
        mgrande = r
 
    # Si es mas grande y no es la raiz
    if mgrande != i:
        arr[i],arr[mgrande] = arr[mgrande],arr[i]  # swap
 
        # Heap la raiz
        heap(arr, n, mgrande)
        
# Función principal de ordenar una matriz de tamaño dado
def heapSort(arr):
    n = len(arr)
    for i in range(n, -1, -1):
        heap(arr, n, i)
 
    #  Mueve la raiz actual y pone fin
    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]   # swap
        heap(arr, i, 0)
        
arr = [ 12, 11, 13, 5, 6, 7]
heapSort(arr)
n = len(arr)
print ("Sorted array is")
for i in range(n):
    print (arr),
    tiempo_final = clock()
    print (tiempo_final - tiempo_inicial)