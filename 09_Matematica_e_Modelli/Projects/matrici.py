def prodotto_matrice_vettore(A, x):
    if not A or len(A[0]) != len(x):
        raise ValueError("Dimensioni incompatibili")
    return [sum(aij * xi for aij, xi in zip(riga, x)) for riga in A]


if __name__ == "__main__":
    A = [[1, 2], [3, 4]]
    x = [5, 6]
    print(prodotto_matrice_vettore(A, x))
