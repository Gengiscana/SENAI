SELECT * FROM cliente JOIN pedido ON cliente.id = pedido.id_cliente;
SELECT * FROM produto JOIN pedido ON produto.id = pedido.id_produto;
SELECT * FROM pedido ORDER BY id DESC LIMIT 2;
SELECT * FROM pedido JOIN cliente ON pedido.id_cliente = cliente.id WHERE cliente.id = 1;