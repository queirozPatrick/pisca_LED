# Projeto Pisca_LED

Este projeto tem como objetivo o controle de um LED através de um botão. O LED acende quando o botão é pressionado e apaga quando o botão é solto. O código foi desenvolvido para rodar em um microcontrolador **Raspberry Pi Pico** com a linguagem C utilizando a biblioteca **pico/stdlib.h**. O projeto também inclui uma integração para simulação no **wkiwi**.

## Descrição do Projeto

Este código permite o controle de um LED externo conectado ao pino GPIO 11 de um Raspberry Pi Pico. A lógica é simples: o LED acende quando o botão (conectado ao pino GPIO 5) é pressionado e apaga quando o botão é solto. O projeto pode ser utilizado como base para controlar outros dispositivos ou sistemas com base em entradas de botões.

### Comportamento:

- **Quando o botão é pressionado**: O LED acende.
- **Quando o botão não é pressionado**: O LED apaga.
