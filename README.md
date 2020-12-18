# PetFera
Trabalho final da disciplina de Linguagem de Programação I do curso de Tecnologia da Informação da UFRN
Alunos:
   * Herbet Pessoa da Silva Filho
   * Pedro Victor Barbosa Araújo

*Turma: T03

# Descrição
Projeto de um sistema de petshop em que é possivel realizar a gerência de funcionários e comercialização de animais.

# Funcionalidade
As funcionalidades do petshop consiste em:

    .Animal:
      - Cadastro de um animal;
      - Remoção;
      - Alteração de dados;
      - Listagem de dados;
      - Listar todos os animais ou por sua determinada classe;
    .Veterinário:
      - Cadastro;
      - Remoção;
      - Alteração de dados;
      - Consultar dados;
      - Listar veterinários;
      - Listar animais sob cuidado do veterinário;
    .Tratador:
      - Cadastro;
      - Remoção;
      - Alteração de dados;
      - Consultar dados;
      - Listar tratadores;
      - Listar animais sob cuidado do tratador;
     
    .Armazenamento de dados:
      -Após a finalização do programa, todos os dados cadastrais dos animais e funcionários ficam salvos em arquivos CSV;
      -É possivel carregar todos os dados cadastrais de sessões anteriores, retornando de onde parou.
      
# Como Compilar

   O código foi rodado através do makefile e ao executar no terminal irá colocar make run_all para  rodar e make clear para aparar todos os arquivos objeto do diretório e resetar o terminal, também existe a possibilidade de rodar o make run_all_clean que primeiro apaga os arquivos objetos e reseta o terminal e logo apos compila e roda o programa.
      
# Primeira Entrega  
   
  A primeira parte do projeto foi finalizada e corrigida do dia 01/12, onde segue cumprindo com todas as indicações de correção que o professor inseriu. Segue abaixo o link do repositório da primeira parte do projeto finalizado.
      
      https://github.com/Herbet-filho/pet_fera/tree/main/Primeira_entrega
      Link do video da apresentação no YouTube: https://youtu.be/OABShK4KeuE
    

# Segunda Entrega

  A segunda e ultima parte do projeto foi finalizada no dia 18/12. Após uma primeira entrega incompleta com muitos erros de código e uma assimilação de conteúdo não tão concreta, nos preparamos melhor e mediante todas as observações feita pelo professor, conseguindo sanar todos os problemas apontados na primeira entrega, como por exemplo:
  .A retirada de arrays do nosso código e a inserção de vetors; 
  .A conclusão das classes que faltavam(nativo,exotico,doméstico);
  .Organização;
  .Melhor uso de heranças;
  .Uso de classes abstratas
  Fora todos os problemas resolvidos, também implementamos a parte principal da segunda entrega, que foi a manipulação de arquivos, criando métodos para salvar e carregar todos os dados inseridos.
