use gestao_pedidos;
insert into cliente (nome, cep, numero, complemento) values
('Timóteo Matos','13905-714','27','Ap44 bl01'),
('Xeila Teixeira de Souza','13907-100',null,'Fundos'),
('Raul Bispo Filho','13907-100','100',null),
('Hugo Souza','13904-906','9090','Fundos'),
('Brito Bispo Martim','13904-906','1313',null),
('Hugo Silva Alves','13904-452','1010',null),
('Valter Martins','13904-071','1245',null),
('Antônio Martins','13905-520','2345',null),
('Zélia Júnior','13901-329','13',null),
('Evandro Martins de Oliveira','13905-682','17','BL12 AP44'),
("Ana Maria Silva","13905-522","21",null),
("Valentina Oliveira","13903-333","12","Ap:19 Bloco:2"),
("Enzo Martins","13903-235"," 195B","Ap: 19");
SELECT * FROM cliente;

insert into Telefone (id_cliente, tipo, numero) values
(1,"Celular","19 99987-8789"),
(1,"Celular","19 99980-4848"),
(2,"Residencial","19 98450-1212"),
(3,"Celular","19 99988-2121"),
(3,"Residencial","19 99777-2222"),
(3,"Comercial","19 99900-1010"),
(4, "celular", "19-90952-7709"),
(4, "residencial", "19-86960-6613"),
(5, "celular", "19-59052-5910"),
(5, "residencial", "19-70278-3889"),
(6, "celular", "19-95184-7473"),
(7, "celular", "19-18092-0669"),
(8, "celular", "19-19025-8194"),
(9, "celular", "19-54195-3946"),
(9, "residencial", "19-09467-9337"),
(10, "celular", "19-85553-5217"),
(11, "celular", "19-76827-0808"),
(12, "celular", "19-03094-9372"),
(12, "residencial", "19-87797-0571"),
(12, "comercial", "19-06019-6601"),
(13, "celular", "19-53922-8414");
select * from telefone;

insert into produto(nome) values
("Impressora laser"),
("Impressora deskjet"),
("Impressora matricial"),
("Impressora mobile");

insert into pedido(id,id_produto,id_cliente,quantidade,valor_unitario) values
(1005,1,1,5,1500.00),
(1006,2,1,3,350.00),
(1007,3,2,1,190.00),
(1008,4,3,6,980.00);

select * from cliente;
select * from telefone;
select * from produto;
select * from pedido;