agora vamos tentar manipular cada pixel individualmente

1 - carregar a imagem
	img = newSimpleImage("circulo.bmp");
define que o arquivo bmp é a img
2 - aplicar zoom a imagem
	img.setZoom(20);
zoom de 20 vezes o tamanho original
3- escolhendo o pixel
	pixel = img.getPixel(4,4)
pegando o pixel 4x e 4y
4- pintando o pixel
	pixel.setRed(255)
vamos pintar o pixel selecionado da cor especificada
5 - renderizar a imagem
	print(img);
printa na tela

primeiro valor é horizontal segundo valor é vertical

tb podemos usar outros outras cores usando essas funções
setGreen()
setBlue()

o pixel do canto superior esquerdo vai ser sempre 0,0 (y = 0 , x = 0)

afastamento do zoom é numero positivo tipo 0.5 = 2x de afastamento
![[Pasted image 20250217122032.png]]