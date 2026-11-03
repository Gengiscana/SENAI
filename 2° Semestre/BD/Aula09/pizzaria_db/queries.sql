use Pizzaria;
-- A
show tables;
-- B
SELECT COUNT(*) AS 'total de clientes' FROM clientes;
-- C
SELECT COUNT(*) AS 'total de pizzas' FROM Pizzas;
-- D
SELECT SUM(quantidade) AS 'total pizzas pedido 3' FROM Itens_Pedido WHERE pedido_id = 3;
-- E
DESCRIBE pedidos;
DESCRIBE clientes;
SELECT * FROM pedidos WHERE pedido_id = 3;
SELECT * FROM clientes WHERE cliente_id = 2;
-- F
SELECT p.nome AS nome_pizza, ip.quantidade FROM Itens_Pedido ip JOIN Pizzas p ON ip.pizza_id = p.pizza_id WHERE ip.pedido_id = 3;