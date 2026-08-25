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
| Cliente | Porte | varchar | 40 | Porte do animal do cliente |
