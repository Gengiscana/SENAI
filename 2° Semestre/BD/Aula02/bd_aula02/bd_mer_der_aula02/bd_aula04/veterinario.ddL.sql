drop database if exists veterinario_gengis;
create database veterinario_gengis;
use veterinario_gengis;
create table consultas(
    id int primary key auto_increment,
    tipo varchar(40) not null,
    descricao varchar(200) not null,
    valor decimal(10,2) not null,
    grande_porte decimal(10,2) not null
);

create table veterinarios(
    id int primary key auto_increment,
    formacao varchar(40),
    nome varchar(40),
    custo decimal(10,2)
);

create table clientes(
    id int primary key auto_increment,
    id_consulta int(11) not null,
    id_veterinario int(11) not null,
    nome varchar(40) not null,
    porte varchar(40) not null,
    tipo varchar(40) not null,
    animal varchar(40) not null,
    data Date default (curdate()) not null,
    custo_consulta decimal(10,2) not null,
    custo_veterinario decimal(10,2) not null,
    total decimal(10,2) not null
);

alter table clientes add constraint fk_consultas foreign key (id_consulta) references consultas(id);
alter table clientes add constraint fk_veterinarios foreign key (id_veterinario) references veterinarios(id);

show tables;
describe consultas;
describe veterinarios;
describe clientes;