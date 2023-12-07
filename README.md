# Exportador de Senhas do Chrome - Projeto Digispark

Este projeto utiliza uma placa DigiSpark para automatizar o processo de exportação de senhas do Chrome e o envio por e-mail. A biblioteca DigiKeyboardPtBr é utilizada para simular entradas de teclado e executar uma série de ações.

## Conteúdo

1. [**Visão Geral**](#visão-geral)
2. [**Componentes do Projeto**](#componentes-do-projeto)
3. [**Instruções de Uso**](#instruções-de-uso)
4. [**Personalização**](#personalização)
5. [**Dependências**](#dependências)
6. [**Observações**](#observações)

## Visão Geral

Este projeto Arduino é desenvolvido para fins educacionais e automatiza as seguintes etapas:

1. Abre o Google Chrome maximizado.
2. Navega até as configurações do gerenciador de senhas.
3. Seleciona a opção de exportação CSV.
4. Salva as senhas em um arquivo CSV.
5. Envia o arquivo CSV por e-mail usando PowerShell.

## Componentes do Projeto

### Bibliotecas

1. **Arduino.h**
   - Biblioteca padrão do Arduino para funcionalidades básicas.

2. **DigiKeyboardPtBr.h**
   - Biblioteca personalizada para o layout do teclado em português brasileiro no DigiSpark.

### Funções Principais

- `void setup()`: Configuração inicial que executa as etapas principais do projeto.
- `void loop()`: Loop principal, atualmente vazio.

### Funções Auxiliares

- `void sendKeyPress(byte keyPress, byte modifiers)`: Envia eventos de pressionamento de tecla.

## Instruções de Uso

1. **Configuração de Hardware**
   - Conecte a placa DigiSpark ao computador.

2. **Upload do Código**
   - Faça o upload do código Arduino para a placa DigiSpark usando o Arduino IDE.

3. **Execução**
   - O DigiSpark automatizará o processo de exportação de senhas ao ser conectado.

## Personalização

1. **Configuração do E-mail**
   - Modifique as variáveis `$email` e `$addressee` no script PowerShell com os endereços de e-mail.

2. **Localização do Arquivo de Senhas**
   - Ajuste a variável `$tempcsv` para especificar o local e o nome do arquivo CSV exportado.

3. **Configuração SMTP**
   - Defina os detalhes do servidor SMTP nas variáveis `$smtpServer` e `$port`.

## Dependências

- **Biblioteca DigiKeyboardPtBr**
  - Certifique-se de que a biblioteca DigiKeyboardPtBr está instalada no Arduino IDE.

## Observações

- Este projeto é destinado a fins educacionais e deve ser usado de maneira responsável e ética.
