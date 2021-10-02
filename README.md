ALUNO: EDILSON PEREIRA DA SILVA 1520430

FUNDAMENTAÇÃO TEORIA
	Este trabalho foi realizado para mostrar o funcionamento das portas lógicas: AND, NAND, OR, NOR, XOR e NXOR,
	que funciona da seguinte forma.

- AND obtem resposta verdadeira quando as todas as suas proposições são verdadeiras.
- NAND é a negação do AND, apenas obtem resposta verdadeira quando todas as suas proposições forem falsas
- OR obtem resposta verdadeira quando pelo menos uma de suas proposições forem verdadeira.
- NOR é a negação do OR, ou seja, obtem resposta verdadeira quando todas as suas proposições forem falsas.
- XOR funciona como um detector de diferenças, apenas obtem resposta verdadeia quando apenas uma de suas proposições forem verdadeiras
- NXOR é a negação do XOR, ou seja, obtem resposta verdadeira quando todas as proposições forem verdadeiras ou todas forem falsas

EXPLICAÇÃO DO CÓDIGO
	Define as saídas (leds) com as directivas '#define' usando as palavras: ENTRADA_1,
	ENTRADA_2, SAIDA_AND, SAIDA_NAND, SAIDA_OR, SAIDA_NOR, SAIDA_XOR, SAIDA_XNOR.

	Em sequência são criadas as funções para o cálculo das proposições. 

	É criado uma função nomeada com "setLuz" para configurar a função "digitalWrite" com o 
	valor "HIGH" ou "LOW" dependendo do resuldado booleano da variável "resultado" passada por parâmetro.
	
	Função "setup" configura todas as portas como saídas.

	Função "loop" é onde acontece a execução em si.
	A função "loop" tem um laço de repetição for que vai de 1 a 4, nesta função há 4 repetições de 7 
	chamadas da função setLuz que configura a função "digitalWrite" dependendo do resultado booleano 
	das funções de cálculo das proposições, exeto as duas primeiras chamdas que são ditas entradas.
	As duas primeiras chamadas mostram as combinações de valores booleanos a serem calculados.
