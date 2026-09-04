CREATE TABLE autore (
    id INTEGER PRIMARY KEY,
    nome VARCHAR(100) NOT NULL
);

CREATE TABLE libro (
    id INTEGER PRIMARY KEY,
    titolo VARCHAR(200) NOT NULL,
    autore_id INTEGER NOT NULL REFERENCES autore(id)
);

INSERT INTO autore VALUES (1, 'Dante Alighieri');
INSERT INTO autore VALUES (2, 'Italo Calvino');

INSERT INTO libro VALUES (1, 'La Divina Commedia', 1);
INSERT INTO libro VALUES (2, 'Il barone rampante', 2);

SELECT l.titolo, a.nome AS autore
FROM libro l
JOIN autore a ON a.id = l.autore_id
ORDER BY l.titolo;
