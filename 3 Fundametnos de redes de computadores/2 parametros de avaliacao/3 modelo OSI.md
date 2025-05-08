esse é um modelo de referencia e nao é usado na pratica

    Cada protocolo é executado em uma camada.
    Cada camada oferece seus serviços à camada acima dela, executando certas ações dentro dela, e utilizando os serviços da camada diretamente abaixo dela.
    O ponto de ligação entre uma camada e outra camada é denominado interface.

---

# OSI

reference model open systems interconnections

ele é composto por sete camadas

1. aplicacao
   aonde ficam as aplicacoes que irao ser responsaveis por trocar mensagens por exemplo
2. apresentacao
   aqui ficam os serviços responsaveis por "traduzir" as mensagens, serviços como compressão, criptografia e a codificação de dados.
3. sessao
   aqui a sincronização da troca de dados
4. transporte
   é onde carregamos as mensagens do ponto 1, garantindo que os dados sejam carregados corretamente sem perda
5. rede
   aqui é onde identificamos os hospedeiros e o caminho entre eles, cada maquina é identificada por um endereço logico disponibilizado pelo roteador
   os pacotes dessa camada sao conhecidos como _datagrama_.
6. enlace
   Nesta camada, leva-se um pacote, denominado quadro, de um nó ao nó seguinte, no caminho entre origem e destino. Em cada nó, a camada de rede passa o datagrama para a camada de enlace, que fica responsável por encaminhar o pacote de dados até o próximo nó, de forma confiável, ou seja, sem erros.
7. fisico
   aqui os bits individuais sao transmitidos de nó em nó, por um transmisor tipo fio de cobre ou fibra otica.
