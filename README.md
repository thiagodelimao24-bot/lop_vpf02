# Projeto: Sistema de Gestão Veterinária

![MER DER Conceitual](./mer%20der%20conceitual.png)
![MER DER Lógico](./mer%20der%20logico.png)

## Dicionário de Dados

| Tabela | Campo | Tipo de dado | Tamanho | Descrição |
| :--- | :--- | :--- | :--- | :--- |
| Paciente | ID_paciente | INT | - | Identificador único do paciente |
| Paciente | nome | VARCHAR | 100 | Nome completo do paciente (animal) |
| Paciente | CPF | VARCHAR | 11 | CPF do tutor/responsável pelo paciente |
| Paciente | data_nasc | DATE | - | Data de nascimento do paciente |
| Paciente | telefone | VARCHAR | 15 | Telefone de contato do tutor |
| Paciente | convenio | VARCHAR | 50 | Nome do plano/convênio veterinário |
| Médico | ID_médico | INT | - | Identificador único do médico veterinário |
| Médico | nome | VARCHAR | 100 | Nome completo do veterinário |
| Médico | CRM | VARCHAR | 20 | Registro do Conselho Regional de Medicina Veterinária |
| Médico | especialidade | VARCHAR | 50 | Área de especialização do veterinário |
| Médico | telefone | VARCHAR | 15 | Telefone de contato profissional |
| Consulta | ID_consulta | INT | - | Identificador único do atendimento |
| Consulta | ID_paciente | INT | - | Chave estrangeira referente ao paciente atendido |
| Consulta | ID_Médico | INT | - | Chave estrangeira referente ao veterinário responsável |
| Consulta | Data_hora | DATETIME | - | Data e horário da realização da consulta |
| Consulta | Diagnostico | TEXT | - | Relatório e parecer clínico da consulta |
| Consulta | Valor | DECIMAL | 10,2 | Valor cobrado pelo atendimento |

## Dados de Teste (Arquivos CSV)

| Arquivo | Conteúdo | Link de Acesso |
| :--- | :--- | :--- |
| medico.csv | Cadastro dos médicos veterinários | [Acessar médico.csv](./medico.csv) |
| paciente.csv | Registros dos pacientes atendidos | [Acessar paciente.csv](./paciente.csv) |
| consulta.csv | Histórico de consultas e atendimentos | [Acessar consulta.csv](./consulta.csv) |
