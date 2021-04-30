---
description: 本文章使用ubuntu 18.04
---

# Linux 架站

## 使用套件

### 一、Mono

{% embed url="https://www.mono-project.com/download/stable/\#download-lin" %}

### 二、其他套件

```text
-------------------必須要執行-------------------
#更改密碼
sudo -s
passwd

#更新/升級
sudo apt update && sudo apt upgrade

#tasksel 套件
sudo apt-get install -y tasksel 

#xrdp 遠端桌面
sudo apt-get install -y xrdp 
sudo service xrdp restart

#SQL Server - Ubuntu 18.04
wget -qO- https://packages.microsoft.com/keys/microsoft.asc | sudo apt-key add -
sudo add-apt-repository "$(wget -qO- https://packages.microsoft.com/config/ubuntu/18.04/mssql-server-2019.list)"
sudo apt-get update
sudo apt-get install -y mssql-server
sudo /opt/mssql/bin/mssql-conf setup
systemctl status mssql-server --no-pager

#SQL Server 命令列工具
curl https://packages.microsoft.com/keys/microsoft.asc | sudo apt-key add -
curl https://packages.microsoft.com/config/ubuntu/18.04/prod.list | sudo tee /etc/apt/sources.list.d/msprod.list
sudo apt-get update 
sudo apt-get install mssql-tools unixodbc-dev
sudo apt-get update 
sudo apt-get install mssql-tools

#Mono 
sudo apt install gnupg ca-certificates
sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3FA7E0328081BFF6A14DA29AA6A19B38D3D831EF
echo "deb https://download.mono-project.com/repo/ubuntu stable-bionic main" | sudo tee /etc/apt/sources.list.d/mono-official-stable.list
sudo apt update

sudo apt install mono-devel


#apache2 
sudo apt-get install apach2

-------------額外安裝-----------------
#GUI 桌面
sudo apt-get install -y xfce4

#MYSQL
wget https://files.phpmyadmin.net/phpMyAdmin/5.1.0/phpMyAdmin-5.1.0-all-languages.zip

#ZIP
sudo apt install zip

systemctl status apache2.service

```



