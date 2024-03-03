#include <stdio.h>
#include "libs/libbmp.h"
#include "libs/imghelpers.h"

int main(){
  int coracaoX, coracaoY, akumaX, akumaY, caveiraX, caveiraY, cor, resp, cod;
    int x;
    int y;
  
    bmp_img img;
    char filename[] = "luffy2.bmp";
    printf("\n");
    IMG_TAM t = pegarTamanho(filename);
    int l = t.qtdLinhas, c = t.qtdColunas;
    int R[l][c];
    int G[l][c];
    int B[l][c];
    carregaImagem(t, R, G, B, filename);
 
    // Utilize apenas imagens .bmp com o formato 24 (true color)
    // converta em: https://online-converting.com/image/convert2bmp/
    

    bmp_img img2; 
    char filename2[] = "oculos1.bmp";
    IMG_TAM t2 = pegarTamanho(filename2);
    int l2 = t2.qtdLinhas, c2 = t2.qtdColunas;
    int R2[l2][c2];
    int G2[l2][c2];
    int B2[l2][c2];
    carregaImagem(t2, R2, G2, B2, filename2);

   bmp_img img3; 
    char filename3[] = "coracao.bmp";
    IMG_TAM t3 = pegarTamanho(filename3);
    int l3 = t3.qtdLinhas, c3 = t3.qtdColunas;
    int R3[l3][c3];
    int G3[l3][c3];
    int B3[l3][c3];
    carregaImagem(t3, R3, G3, B3, filename3);


 bmp_img img4; 
    char filename4[] = "akuma.bmp";
    IMG_TAM t4 = pegarTamanho(filename4);
    int l4 = t4.qtdLinhas, c4 = t4.qtdColunas;
    int R4[l4][c4];
    int G4[l4][c4];
    int B4[l4][c4];
    carregaImagem(t4, R4, G4, B4, filename4);
  
    bmp_img img5; 
    char filename5[] = "zoro3.bmp";
    IMG_TAM t5 = pegarTamanho(filename5);
    int l5 = t5.qtdLinhas, c5 = t5.qtdColunas;
    int R5[l5][c5];
    int G5[l5][c5];
    int B5[l5][c5];
    carregaImagem(t5, R5, G5, B5, filename5);

 bmp_img img6; 
    char filename6[] = "caveira1.bmp";
    IMG_TAM t6 = pegarTamanho(filename6);
    int l6 = t6.qtdLinhas, c6 = t6.qtdColunas;
    int R6[l6][c6];
    int G6[l6][c6];
    int B6[l6][c6];
    carregaImagem(t6, R6, G6, B6, filename6);


printf("\n\n");

  
  
  printf("Escolha qual tipo de Luffy deseja ver: \n (1.Luffy diferenciado, 2.Luffy da paz, 3.Luffy preto e branco ou 4.Zoro???): ");
  scanf("%d", &cod);



  
switch (cod){
  case 1:

for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      if(i < 20 || i >= l - 20 || j < 20 || j > c - 20){
        R[i][c-j] = 0;
        G[i][c-j] = 0;
        B[i][c-j] = 0;
      }
    }
}
    
  // manipule sua imagem aqui. 
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      if(R[i][j]>150)
       R[i][j] = 0;
       B[i][j] = 0;
       G[i][j] = 0;
      }
      printf("\n");
    }

  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
       if(R[i][j] > 100)
         R[i][j] += 100;
      if(G[i][j] > 100)
         G[i][j] += 100;
      if(B[i][j] > 100)
         B[i][j] += 100;
      }
      printf("\n");
    }



for (int i = 0; i < l3; i++) {
    for (int j = 0; j < c3; j++) {
        x = i + 320;
        y = j + 330;

       
           if(R3[i][j] > 240 && G3[i][j]> 240 && B3[i][j] > 240){
            R3[i][j] = R[x][y];
            G3[i][j] = G[x][y];
            B3[i][j] = B[x][y];
          }
            
            R[x][y] = R3[i][j];
            G[x][y] = G3[i][j];
            B[x][y] = B3[i][j];
         
        }
    }

    printf("\n\n");
    
 salvaImagem(t, R, G, B, "saida.bmp");
    mostrarNoReplit("saida.bmp");
  break;

  case 2:

    printf("\n\n");
    
    printf("Deseja o Luffy pre-definido ou deseja personaliza-lo? \n (1.pre-definido, 2.personalizado): ");
    scanf("%d", &resp);



 switch (resp){
    
    case 1:
      
  for (int i = 0; i < l2; i++) {
    for (int j = 0; j < c2; j++) {
        x = i + 155;
        y = j + 60;
      
           if(R2[i][j] > 240 && G2[i][j]> 240 && B2[i][j] > 240){
            R2[i][j] = R[x][y];
            G2[i][j] = G[x][y];
            B2[i][j] = B[x][y];
          }
          
            R[x][y] = R2[i][j];
            G[x][y] = G2[i][j];
            B[x][y] = B2[i][j];
         
        }
    }

   

for (int i = 0; i < l3; i++) {
    for (int j = 0; j < c3; j++) {
        x = i + 320;
        y = j + 330;

  
           if(R3[i][j] > 240 && G3[i][j]> 240 && B3[i][j] > 240){
            R3[i][j] = R[x][y];
            G3[i][j] = G[x][y];
            B3[i][j] = B[x][y];
          }
           
            R[x][y] = R3[i][j];
            G[x][y] = G3[i][j];
            B[x][y] = B3[i][j];
         
        }

}



for (int i = 0; i < l4; i++) {
    for (int j = 0; j < c4; j++) {
        x = i + 1;
        y = j + -15;

        if(R4[i][j] > 240 && G4[i][j]> 240 && B4[i][j] > 240){
            R4[i][j] = R[x][y];
            G4[i][j] = G[x][y];
            B4[i][j] = B[x][y];
          }
           
            R[x][y] = R4[i][j];
            G[x][y] = G4[i][j];
            B[x][y] = B4[i][j];
         
        }
    }



     for (int i = 0; i < l6; i++) {
    for (int j = 0; j < c6; j++) {
        x = i + 245;
        y = j + -65;

        if(R6[i][j] > 245 && G6[i][j]> 245 && B6[i][j] > 245){
            R6[i][j] = R[x][y];
            G6[i][j] = G[x][y];
            B6[i][j] = B[x][y];
          }
           
            R[x][y] = R6[i][j];
            G[x][y] = G6[i][j];
            B[x][y] = B6[i][j];
         
        }
    }

    printf("\n\n");
      
  salvaImagem(t, R, G, B, "saida.bmp");
    mostrarNoReplit("saida.bmp");

  break;


case 2:

printf("Digite o valor da posição X e Y do Coração:\n");
  scanf("%d %d", &coracaoX, &coracaoY);

printf("Digite o valor da posição X e Y da Akuma no mi:\n");
  scanf("%d %d", &akumaX, &akumaY);  

 printf("Digite o valor da posição X e Y da Caveira:\n");
  scanf("%d %d", &caveiraX, &caveiraY);
  
    for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      if(i < 20 || i >= l - 20 || j < 20 || j > c - 20){
        R[i][c-j] = 0;
        G[i][c-j] = 0;
        B[i][c-j] = 0;
      }
    }
}
    
  for (int i = 0; i < l2; i++) {
    for (int j = 0; j < c2; j++) {
        x = i + 155;
        y = j + 60;
      
           if(R2[i][j] > 240 && G2[i][j]> 240 && B2[i][j] > 240){
            R2[i][j] = R[x][y];
            G2[i][j] = G[x][y];
            B2[i][j] = B[x][y];
          }
          
            R[x][y] = R2[i][j];
            G[x][y] = G2[i][j];
            B[x][y] = B2[i][j];
         
        }
    }


for (int i = 0; i < l3; i++) {
    for (int j = 0; j < c3; j++) {
        x = i + coracaoX;
        y = j + coracaoY;

  
           if(R3[i][j] > 240 && G3[i][j]> 240 && B3[i][j] > 240){
            R3[i][j] = R[x][y];
            G3[i][j] = G[x][y];
            B3[i][j] = B[x][y];
          }
           
            R[x][y] = R3[i][j];
            G[x][y] = G3[i][j];
            B[x][y] = B3[i][j];
         
        }
    }


for (int i = 0; i < l4; i++) {
    for (int j = 0; j < c4; j++) {
        x = i + akumaX;
        y = j + akumaY;

        if(R4[i][j] > 240 && G4[i][j]> 240 && B4[i][j] > 240){
            R4[i][j] = R[x][y];
            G4[i][j] = G[x][y];
            B4[i][j] = B[x][y];
          }
           
            R[x][y] = R4[i][j];
            G[x][y] = G4[i][j];
            B[x][y] = B4[i][j];
         
        }
    }



    for (int i = 0; i < l6; i++) {
    for (int j = 0; j < c6; j++) {
        x = i + caveiraX;
        y = j + caveiraY;

        if(R6[i][j] > 200 && G6[i][j]> 200 && B6[i][j] > 200){
            R6[i][j] = R[x][y];
            G6[i][j] = G[x][y];
            B6[i][j] = B[x][y];
          }
           
            R[x][y] = R6[i][j];
            G[x][y] = G6[i][j];
            B[x][y] = B6[i][j];
         
        }
    }

printf("\n\n");
  
  salvaImagem(t, R, G, B, "saida.bmp");
    mostrarNoReplit("saida.bmp");

  break;

    default:
          printf("Opção inválida para personalização do Luffy.\n");
          break;
}     

break;
    
  case 3:

for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      if(i < 20 || i >= l - 20 || j < 20 || j > c - 20){
        R[i][c-j] = 0;
        G[i][c-j] = 0;
        B[i][c-j] = 0;
      }
    }
}
    
// manipule sua imagem aqui. 
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      if(R[i][j]>150){
       R[i][j] = 0;
       B[i][j] = 0;
       G[i][j] = 0;
      }
      printf("\n");
    cor = R[i][j]+B[i][j]+G[i][j];
    R[i][j] = cor;
    B[i][j] = cor;
    G[i][j] = cor;
    }
  }



for (int i = 0; i < l3; i++) {
    for (int j = 0; j < c3; j++) {
        x = i + 320;
        y = j + 330;

           if(R3[i][j] > 240 && G3[i][j]> 240 && B3[i][j] > 240){
            R3[i][j] = R[x][y];
            G3[i][j] = G[x][y];
            B3[i][j] = B[x][y];
          }
         
            R[x][y] = R3[i][j];
            G[x][y] = G3[i][j];
            B[x][y] = B3[i][j];
         
        }
    }

  printf("\n\n");
   
 salvaImagem(t, R, G, B, "saida.bmp");
    mostrarNoReplit("saida.bmp");
  break;

  case 4:
    

for(int i=0;i<l5;i++){
    for(int j=0;j<c5;j++){
      if(R5[i][j]>150)
       R5[i][j] = 255 - R5[i][j];
       B5[i][j] = 255 - B5[i][j];
       G5[i][j] = 255 - G5[i][j];
      }
      printf("\n");
    }

printf("\n\n");
  
   salvaImagem(t5, R5, G5, B5, "saida.bmp");
    mostrarNoReplit("saida.bmp");

  break;
  
  default:
  printf("codigo invalido");
    
}


    return 0;
  }
 





