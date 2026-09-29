drop database if exists gestao_dados;
create database gestao_dados;
use gestao_dados;
create table cliente(
    id int primary key auto_increment,
    nome varchar(100) not null,
    cep varchar(11) not null,
    numero int(11) not null,
    complemento varchar(100) not null
);

create table telefone(
    id int primary key auto_increment,
    id_cliente int(11) not null,
    numero varchar(15) not null,
    tipo varchar(20) not null
);

create table produto(
    id int primary key auto_increment,
    nome varchar(100) not null
);

create table pedido(
    id int primary key auto_increment,
    id_cliente int(11) not null,
    id_produto int(11) not null,
    valor_unitario decimal(10,2) not null,
    quantidade int(11) not null,
    subtotal decimal(10,2) not null
);

alter table telefone add constraint fk_cliente foreign key (id_cliente) references cliente(id);
alter table pedido add constraint fk_cliente foreign key (id_cliente) references cliente(id);
alter table pedido add constraint fk_produto foreign key (id_produto) references produto(id);

show tables;
describe cliente;
describe telefone;
describe produto;
describe pedido;