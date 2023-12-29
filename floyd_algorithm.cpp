// Uma técnica de algoritmo indicado para encontrar ciclos em uma lista encadeada
// Nesse exemplo o main passaria uma lista [1 ,2, 3, 4, 5] e a posicao que ela retorna pos = 2
// Ela retornaria na posicao de nó 4 rapido(1, 3, 5, 2, 4) slow(1, 2, 3, 4)
// caso não se encontrarem então irá retornar um valor nulo no final e vai finalizar o loop
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
 };
class Solution {
public:
    bool hasCycle(ListNode *head) {  //aqui ele está definindo a lista, e criando um ponteiro dela para ela poder ser usada
        ListNode *lento = head, *rapido = head; //lista sendo usada para compor os ponteiros lentos e rapidos, ambos irão iterar a lista 
        while (rapido && rapido->next) {      //  se o ponteiro rapido nao for nulo, ou o ponteiro next não for nulo -> prossiga                       
            lento = lento->next;              // está atribuindo algum valor da lista_head (pega do next) no lento
            rapido = rapido->next->next;      // está atribuindo algum valor 2 passos a frente da lista_head(next->next)
            if (lento == rapido) return true;       //aqui verifica se os ponteiros se encontram na iteração, se sim então a lista possui ciclo
        }
        
        return false;
    }
};

int main(){
    ListNode(1);
    

}
