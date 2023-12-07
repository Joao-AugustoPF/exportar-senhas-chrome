Exportador de Senhas do Chrome - Projeto Arduino
Este projeto utiliza uma placa DigiSpark para automatizar o processo de exportação de senhas do Chrome e o envio por e-mail. A biblioteca DigiKeyboardPtBr é utilizada para simular entradas de teclado e executar uma série de ações.

Conteúdo
Visão Geral
Componentes do Projeto
Instruções de Uso
Personalização
Dependências
Observações
Visão Geral
Este projeto Arduino é desenvolvido para fins educacionais e automatiza as seguintes etapas:

Abre o Google Chrome maximizado.
Navega até as configurações do gerenciador de senhas.
Seleciona a opção de exportação CSV.
Salva as senhas em um arquivo CSV.
Envia o arquivo CSV por e-mail usando PowerShell.
Componentes do Projeto
Bibliotecas
Arduino.h

Biblioteca padrão do Arduino para funcionalidades básicas.
DigiKeyboardPtBr.h

Biblioteca personalizada para o layout do teclado em português brasileiro no DigiSpark.
Funções Principais
void setup(): Configuração inicial que executa as etapas principais do projeto.
void loop(): Loop principal, atualmente vazio.
Funções Auxiliares
void sendKeyPress(byte keyPress, byte modifiers): Envia eventos de pressionamento de tecla.
Instruções de Uso
Configuração de Hardware

Conecte a placa DigiSpark ao computador.
Upload do Código

Faça o upload do código Arduino para a placa DigiSpark usando o Arduino IDE.
Execução

O DigiSpark automatizará o processo de exportação de senhas ao ser conectado.
Personalização
Configuração do E-mail

Modifique as variáveis $email e $addressee no script PowerShell com os endereços de e-mail.
Localização do Arquivo de Senhas

Ajuste a variável $tempcsv para especificar o local e o nome do arquivo CSV exportado.
Configuração SMTP

Defina os detalhes do servidor SMTP nas variáveis $smtpServer e $port.
Dependências
Biblioteca DigiKeyboardPtBr
Certifique-se de que a biblioteca DigiKeyboardPtBr está instalada no Arduino IDE.
Observações
Este projeto é destinado a fins educacionais e deve ser usado de maneira responsável e ética.
