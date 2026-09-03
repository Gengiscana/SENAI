-- Acessando o banco de dados
use compras_caixeiro
-- Inserindo fornecedor
insert into fornecedor (nome, cidade, estado, pais, referencia, observacao)
values
('Socrates', 'Atenas', 'Atenas', 'Grécia', 'Panteão', 'Fornecedor de Lã'),
('Leônidas', 'Atenas', 'Atenas', 'Grécia', 'Porto', 'Sal e especiarias'),
('Hefesto', 'Sparta', 'Sparta', 'Grécia', 'Fonte', 'Ferreiro do baum'),
('Pitágoras', 'Olímpia', 'Olímpia', 'Grécia', 'Estádio', 'Especiarias');
-- Listando fornecedores
select * from fornecedor;
-- Excluindo fornecedor
delete from fornecedor where id = 1;
-- Listando fornecedores
select * from fornecedor;
-- Alterar dados
update fornecedor set estado = 'AT' where nome like 'Socrates'
-- Importar dados de prodtus arquivo produtos.csv
load data infile 'produtos.CSV'
into table produto
fields terminated by ';'
lines terminated by '\n'
ignore 1 rows;
-- Listando os fornecedores
select * from produto;
