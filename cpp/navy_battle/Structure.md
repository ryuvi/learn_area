# Navy Battle

Este exercício consiste no desenvolvimento de um jogo de Batalha Naval reduzido, que
contemplará as peças demonstradas na Figura 1, sendo constituídas por um tabuleiro
de 15 x 15 posições (Figura 1).

Para este jogo a ser desenvolvido, serão consideradas as seguintes peças que poderão
ser posicionadas na horizontal (deslocamento sempre à direita) ou vertical
(deslocamento sempre abaixo):
• Código 1 - (encouraçados – 4 posições);
• Código 2 - (porta-aviões – 5 posições);
• Código 3 - (submarinos – 1 posição);
• Código 4 - (cruzadores – 2 posições);

- O sistema deverá receber dois arquivos de entrada para processamento do programa, denominados: jogador1.txt (ID=J1) e jogador2.txt (ID=J2); e deverá gerar um único arquivo de saída com o nome resultado.txt (ambos devem ser criados e armazenados na mesma pasta do programa); 
- O arquivo deverá ter o seguinte formato, simulando o posicionamento das
peças no tabuleiro (ver Figura abaixo):
1;A2V|C7H
2;H3H|L10V
3;O5|O6|M9|J4|G3
4;J10H|J14V|P13H|P2H
# Jogada
T;A1|A2|A3|A4|B5|O6|O7|J8|P9|D10|G11|P12|P14|N15|M16|D14|A5|B11|C12|B13
Sendo:
1;A2V|C7H → <código da peça>;<posição da peça>;<direcionamento da peça> # Jogada → <delimitador do grupo de instruções de posicionamento das peças e do grupo de instruções de lançamento de torpedo> T;A1|A2|A3 → <código de torpedo>;<posições onde os torpedos serão disparados>

