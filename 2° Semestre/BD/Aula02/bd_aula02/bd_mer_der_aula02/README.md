# Veterinária Gengis
## MER DER Conceitual
![MER & DER Conceitual](<MER & DER COnceitual.drawio.png>)
## MER DER Lógico
![MER & DER Lógico](<MER & DER Lógico.drawio.png>)
## Dicionário de dados
| Entidade | Atributo | Tipo | Tamanho | Descrição |
| :--- | :--- | :---: | :---: | :--- |
| Consulta | id | int | 11 | Chave primária |
| Consulta | tipo | varchar | 40 | O tipo de consulta |
| Consulta | descrição | varchar | 200 | Descrição do tipo de consulta |
| Consulta | valor | decimal | 10,2 | Preço da consulta correspondente |
| Consulta | grande porte | decimal | 10,2 | Preço alterado caso o animal seja de grande porte |
| Cliente | id | int | 11 | Chave primária |
| Cliente | id_consulta | int | 11 | Chave estrangeira, referência: Consulta (id) |
| Cliente | id_veterinario | int | 11 | Chave estrangeira, referência: Veterinario (id) |
| Cliente | nome | varchar | 40 | Nome do cliente |
| Cliente | porte | varchar | 40 | Porte do animal do cliente |
| Cliente | tipo | varchar | 40 | Se o animal é doméstico ou silvestre |
| Cliente | animal | varchar | 40 | Qual é o animal do cliente |
| Cliente | data | date | | Data de quando foi registrado o atendimento |
| Cliente | custo_consulta | decimal | 10,2 | Quanto foi pago pela consulta |
| Cliente | custo_veterinario | decimal | 10,2 | Quanto foi pago pelo serviço do veterinario |
| Cliente | total | decimal | 10,2 | Valor total somando o dois custos |
| Veterinario | id | int | 11 | Chave primária |
| Veterinario | formação | varchar | 40 | Em que o veterinario é formado |
| Veterinario | nome | varchar | 40 | Nome do veterinario |
| Veterinario | custo | decimal | 10,2 | Custo pelo serviço |
## Dados de teste
[Consultas](consultas.CSV)
[Veterinarios](veterinarios.CSV)
[Clientes](clientes.CSV)
