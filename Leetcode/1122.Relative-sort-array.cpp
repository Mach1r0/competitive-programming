#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        // Cria um vetor de frequências com tamanho 1001 (assumindo que os números em arr1 estão no intervalo de 0 a 1000) e inicializa todas as posições com 0.
        vector<int> freq(1001, 0);

        // Percorre o vetor arr1 e para cada número n em arr1, incrementa a posição n no vetor de frequências.
        for (int n : arr1) freq[n]++;
        
        int i = 0;
        // Percorre o vetor arr2 e para cada número n em arr2, enquanto a frequência de n for maior que 0, coloca n na posição i de arr1 e incrementa i. Também decrementa a frequência de n.
        for (int n : arr2)
            while (freq[n]-- > 0)
                arr1[i++] = n;
        
        // Percorre o vetor de frequências e para cada número n com frequência maior que 0, coloca n na posição i de arr1 e incrementa i. Também decrementa a frequência de n.
        for (int n = 0; n < 1001; ++n)
            while (freq[n]-- > 0)
                arr1[i++] = n;
        
        // Retorna arr1, que agora está ordenado de acordo com arr2.
        return arr1;
    }
};