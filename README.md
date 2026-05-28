# This project has been created as part of the 42 curriculum by < thamoliv >.

# Libft - Biblioteca em C

## Descrição

O projeto Libft consiste na criação de uma biblioteca individual em C que agrupa funções de uso geral que serão fundamentais para os projetos futuros na 42.

O objetivo é entender profundamente o funcionamento da biblioteca padrão (libc), implementando comportamentos de baixo nível como manipulação de memória e aritmética de ponteiros.

---

# Instruções

## Compilação e Instalação

A compilação é gerenciada por um Makefile que utiliza o compilador `cc` com as flags obrigatórias `-Wall -Wextra -Werror`.

O comando `ar` é utilizado para gerar a biblioteca estática, conforme exigido.

## Regras do Makefile

### `make`

Compila todos os arquivos e gera a biblioteca `libft.a`.

```bash
make
```

---

### `make clean`

Remove os arquivos objeto (`.o`) gerados durante a compilação.

```bash
make clean
```

---

### `make fclean`

Realiza a limpeza total, removendo os objetos e o arquivo final `libft.a`.

```bash
make fclean
```

---

### `make re`

Executa `fclean` seguido de `all` para uma recompilação completa.

```bash
make re
```

# Visão Geral da Biblioteca

A biblioteca é composta por 43 funções obrigatórias, incluindo manipulação de listas encadeadas, todas declaradas no `libft.h`.

---

# 1. Funções da Libc (Parte 1)

Reimplementações de funções padrão com o prefixo `ft_`.

## Checagem

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

## Strings

- `ft_strlen`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_strlcpy`
- `ft_strlcat`

## Memória

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`

## Alocação Dinâmica

- `ft_calloc`
- `ft_strdup`
- `ft_atoi`

---

# 2. Funções Adicionais (Parte 2)

Funções utilitárias que estendem as capacidades da libc padrão.

## Manipulação de String/Int

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`

## Mapeamento e Iteração

- `ft_strmapi`
- `ft_striteri`

## Saída de Dados (File Descriptors)

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

# 3. Funções de Lista Encadeada (Parte 3)

Implementação de funções para manipulação da estrutura `t_list`.

## Gestão de Nós

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstadd_back`
- `ft_lstsize`
- `ft_lstlast`

## Limpeza e Transformação

- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

# Recursos e Uso de IA

## Referências

- Manuais do sistema (Man pages) para funções da Libc.
- Norma 42 (Versão 4.1).

---

# Uso de Inteligência Artificial

Neste projeto, a IA foi utilizada para:

- Revisão do Makefile: Garantir que as regras de compilação estivessem de acordo com a Norma, evitando o "relinking".
- Validação de Protótipos: Verificar a conformidade do `libft.h` com as exigências de formatação e nomes de variáveis.
- Explicação de Conceitos: Auxílio na compreensão de comportamentos específicos.
