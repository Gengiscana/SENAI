select id, nome from produto order by produto.nome asc;

select id, nome from produto order by produto.id desc limit 5;

select id, quantidade, valor_unitario from pedido order by pedido.valor_unitario desc;

select * from pedido order by pedido.id desc limit 10;

select pedido.id, cliente.nome, quantidade, valor_unitario from pedido inner join cliente on pedido.id_cliente = cliente.id;

select pedido.id, produto.nome, quantidade, valor_unitario from pedido inner join produto on pedido.id_produto = produto.id;

select pedido.id, cliente.nome, produto.nome, quantidade, valor_unitario, subtotal from pedido
inner join cliente on pedido.id_cliente = cliente.id
inner join produto on pedido.id_produto = produto.id;  

select *, cliente.nome, produto.nome, subtotal from pedido inner join cliente on pedido.id_cliente = cliente.id
inner join produto on id_produto = produto.id order by pedido.subtotal desc limit 5;

select count(id) from cliente;

select count(id) from produto;

select cliente.nome, count(pedido.id) as quantidade_p from cliente
inner join pedido on cliente.id = pedido.id_cliente
group by cliente.id;

select produto.nome, count(pedido.id) as quantidade_p from produto
inner join pedido on produto.id = pedido.id_produto
group by produto.id  order by quantidade_p desc;

select sum(pedido.subtotal) as total from pedido;

select avg(quantidade) as media from pedido;

select produto.nome, sum(pedido.subtotal) as total from pedido
inner join produto on produto.id = pedido.id_produto
group by produto.id order by total desc;
