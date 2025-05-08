# definicoes

## ameaça

Causa potencial de um incidente indesejado que pode resultar em danos a um sistema ou organização.

## ataque

tudo que tenta destruir, expor, alterar, desativar, roubar, obter acesso nao autorizado ou fazer uso nao autorizado de um ativo

## ativo

Qualquer coisa que tenha valor para uma pessoa ou organização. Exemplo: os dados do cartão de crédito, um projeto de uma empresa, um equipamento e até mesmo os colaboradores de uma empresa podem ser definidos como ativos humanos.

- um incidente de segurança ocorre quando uma ameaça se concretiza e causa um dano a um ativo

OS 3 PILARES DA SEGURANÇA:

- CONFIDENCIALIDADE, INTEGRIDADE E DISPONIBILIDADE = CID

IMPORTANTE:
==ABNT NBR ISO IEC 27001:2013==

- Marco Civil da Internet, a Lei Geral de Proteção de Dados (LGPD) e o conjunto de normas 27.000 da ABNT.

# TIPOS DE ATAQUES

## ativos

tentam alterar os recursos do sistema ou afetar a sua operação

- ataque de interrupção
- ataques de modificação
- ataques de fabricação ou personificação
- ataques de repetição

## passivos

tentam descobrir ou utilziar as informações do sistema sem o objetivo de afetar seus recursos

- ataques de interceptação

  | **CRITÉRIOS**          | **TIPOS**                               | **DESCRIÇÃO**                                                                                                                                      | **ATAQUES**                          |
  | ---------------------- | --------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------ |
  | **PONTO DE INICIAÇÃO** | Ataques internos (inside attack)        | Realizados dentro da própria rede. O atacante e a vítima estão na mesma rede (doméstica ou corporativa).                                           |                                      |
  |                        | Ataques externos (outside attack)       | Feitos a partir de um ponto externo à rede da vítima.                                                                                              |                                      |
  | **MÉTODO DE ENTREGA**  | Ataques diretos                         | O atacante, sem a ajuda de terceiros, realiza uma ação diretamente contra a vítima.                                                                |                                      |
  |                        | Ataques indiretos                       | O atacante emprega terceiros, ou seja, outros usuários da rede, para que o ataque seja realizado.                                                  |                                      |
  | **OBJETIVO**           | Ataques de interceptação                | Buscam obter informações que trafegam a rede, atacando a confidencialidade.                                                                        | Ataques passivos (predominantemente) |
  |                        | Ataques de interrupção                  | Seu objetivo é indisponibilizar um ou mais serviços de rede, sobrecarregando os sistemas, as redes ou simplesmente desligando o equipamento.       | Ataques ativos                       |
  |                        | Ataques de modificação                  | Ocorrem quando um atacante tem acesso não autorizado a um sistema ou a uma rede e modifica o conteúdo das informações ou as configurações.         |                                      |
  |                        | Ataques de fabricação ou personificação | Buscam quebrar, principalmente, a autenticidade de um serviço, um dispositivo ou de uma rede.                                                      |                                      |
  |                        | Ataques de repetição                    | Uma entidade maliciosa intercepta e repete uma transmissão de dados válida que trafega através de uma rede para produzir um efeito não autorizado. |                                      |

# ETAPAS DE UM ATAQUE

1. reconhecimento

- O atacante coleta o máximo de informações públicas sobre o alvo para planejar o ataque. Ele usa fontes como sites, redes sociais, dispositivos expostos, notícias e publicações. O foco está em identificar pontos fracos ou negligenciados, que sejam mais fáceis de invadir.

2. armamento (weaponization)

- Com base nas informações coletadas, o atacante escolhe ou desenvolve uma ferramenta (exploit) para explorar vulnerabilidades. Ferramentas personalizadas, conhecidas como zero-day attacks, são mais difíceis de detectar. O objetivo final é obter acesso ao sistema ou rede alvo.

3. entrega (delivery)

- O atacante envia a ferramenta maliciosa ao alvo por meios como e-mail (phishing), USB, sites falsos ou redes sociais. O exploit é disfarçado como algo legítimo para enganar o usuário e facilitar sua execução. Phishing é uma das técnicas mais comuns, usando links ou anexos maliciosos em mensagens atrativas.

4. exploração

- Após a entrega, o exploit é ativado ao explorar uma vulnerabilidade — conhecida ou zero-day — no sistema da vítima. Em ataques de phishing, isso ocorre quando o usuário clica em um link ou anexo malicioso. Com isso, o atacante ganha controle do dispositivo e começa a acessar dados e sistemas na rede. Os principais alvos são aplicativos, falhas do sistema e erros humanos.

5. instalação (persistency)

- Após explorar a vulnerabilidade, o atacante instala um RAT (Remote Access Trojan) — ou backdoor — para manter acesso contínuo ao sistema. O objetivo é garantir controle remoto sem ser detectado, mesmo após verificações de segurança.

6. comando e controle (c2)

- Com o RAT instalado, o atacante estabelece um canal secreto com o sistema infectado. Por esse canal, ele envia comandos para controlar o sistema, lançar novos ataques na rede local ou usá-lo para atacar terceiros.

7. ações no objetivo

- O atacante alcança seu objetivo, como roubo de dados, ataques DDoS, envio de spam ou manipulação de sistemas. Já infiltrado, ele oculta suas atividades e rastros, tornando sua remoção extremamente difícil.
