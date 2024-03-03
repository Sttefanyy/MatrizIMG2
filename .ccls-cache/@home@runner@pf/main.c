#include <stdio.h>
#include "libs/libbmp.h"
#include "libs/imghelpers.h"

int main(){
    // Utilize apenas imagens .bmp com o formato 24 (true color)
    // converta em: https://online-converting.com/image/convert2bmp/
    bmp_img img;
    char filename[] = "luffy2.bmp";
    printf("\n");
    IMG_TAM t = pegarTamanho(filename);
    int l = t.qtdLinhas, c = t.qtdColunas;
    int R[l][c];
    int G[l][c];
    int B[l][c];
    carregaImagem(t, R, G, B, filename);


    bmp_img img2; // Imagem que você deseja colocar sobre a imagem de fundo
    char filename2[] = "oculos1.bmp";
    IMG_TAM t2 = pegarTamanho(filename2);
    int l2 = t2.qtdLinhas, c2 = t2.qtdColunas;
    int R2[l2][c2], G2[l2][c2], B2[l2][c2];
    carregaImagem(t2, R2, G2, B2, filename2);

  int posicaoX = 155;//mudar a variavel para posicao_x
int posicaoY = 60;//mudar a variavel para posicao_y  // Ajuste a posição y onde você deseja colocar a segunda imagem

for (int i = 0; i < l2; i++) {
    for (int j = 0; j < c2; j++) {
        int x = i + posicaoX;
        int y = j + posicaoY;

        // Verifique se as coordenadas estão dentro dos limites da imagem de fundo
        if (x >= 0 && x < l && y >= 0 && y < c) {
           if(R2[i][j] > 240 && G2[i][j]> 240 && B2[i][j] > 240){
            R2[i][j] = R[x][y];
            G2[i][j] = G[x][y];
            B2[i][j] = B[x][y];
          }
            // Combine as cores dos dois pixels (pode ser uma simples média ou outra fórmula de composição)
            R[x][y] = R2[i][j];
            G[x][y] = G2[i][j];
            B[x][y] = B2[i][j];
         
        }
    }
}
  
    salvaImagem(t, R, G, B, "saida.bmp");
    mostrarNoReplit("saida.bmp");
    return 0;
}
