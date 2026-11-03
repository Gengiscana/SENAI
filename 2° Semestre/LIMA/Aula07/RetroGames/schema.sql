DROP DATABASE IF EXISTS db_retrogames;
CREATE DATABASE IF NOT EXISTS db_retrogames;
USE db_retrogames;

CREATE TABLE IF NOT EXISTS jogos (
    id INT AUTO_INCREMENT PRIMARY KEY,
    titulo VARCHAR(100) NOT NULL,
    plataforma VARCHAR(100) NOT NULL,
    desenvolvedora VARCHAR(100) NOT NULL,
    imagem_url VARCHAR(100) NOT NULL,
    preco DECIMAL(10, 2) NOT NULL,
    data_cadastro TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

INSERT INTO jogos (titulo, plataforma, desenvolvedora, imagem_url, preco) VALUES
('ULTRAKILL', 'PC', 'Hakita', 'https://i.pinimg.com/736x/16/92/f4/1692f441fd8ca37d2ddaf8370cbd22bd.jpg', 50.00),
('Black Souls II', 'PC', 'Eeny, meeny, miny, moe?', 'https://static.wikitide.net/blacksoulswiki/thumb/3/39/BkS1_ENG.png/300px-BkS1_ENG.png', 76.76),
('Rain World', 'Console/PC', 'Videocult', 'https://i.pinimg.com/736x/12/bd/7d/12bd7d3f8596bbfa4b5438760eed8dd1.jpg', 80.00);